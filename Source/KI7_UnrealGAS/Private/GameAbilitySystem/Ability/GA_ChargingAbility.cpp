// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAbilitySystem/Ability/GA_ChargingAbility.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Character.h"

UGA_ChargingAbility::UGA_ChargingAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UGA_ChargingAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);	// 쿨타임이나 코스트 문제
		return;
	}

	CurrentChargingTime = 0.0f; //차징 시간 초기화
	GetWorld()->GetTimerManager().SetTimer(
		ChargingTimerHandle,
		this,
		&UGA_ChargingAbility::UpdateChrgingTime,
		0.01f,
		true
	); //타이머를 이용해 차징 시간 업데이트 처리

	//차징 시 적용될 이펙트가 있으면 채용
	if (ChargingEffectClass && ActorInfo->AbilitySystemComponent.IsValid())
	{
		FGameplayEffectContextHandle Context = ActorInfo->AbilitySystemComponent->MakeEffectContext();
		Context.AddSourceObject(this);
		FGameplayEffectSpecHandle Spec = ActorInfo->AbilitySystemComponent->MakeOutgoingSpec(
			ChargingEffectClass,
			GetAbilityLevel(),
			Context
		);
		if (Spec.IsValid())
		{
			ChargingEffectHandle = ActorInfo->AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec.Data.Get());
		}
	}
	UE_LOG(LogTemp, Log, TEXT("UGA_ChargingJump : 차징 시작"));
}

void UGA_ChargingAbility::InputReleased(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	ExecuteSuperJump(ActorInfo); //점프 실행
	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);//어빌리티 종료
}

void UGA_ChargingAbility::UpdateChrgingTime()
{
	CurrentChargingTime += 0.01f; //시간 업데이트(타이머가 0.01초마다 실행)
	if (CurrentChargingTime >= MaxChargingTime) //최대치 넘어서면 설정
	{
		CurrentChargingTime = MaxChargingTime;
		GetWorld()->GetTimerManager().ClearTimer(ChargingTimerHandle); //타이머 중지
		UE_LOG(LogTemp, Log, TEXT("UGA_ChargingJump : 차징 최대치 도달"));
	}
}

void UGA_ChargingAbility::ExecuteSuperJump(const FGameplayAbilityActorInfo* ActorInfo)
{
	if (ActorInfo && ActorInfo->AvatarActor.IsValid()) //ActorInfo와 AvatarActor 확인
	{
		if (ChargingEffectHandle.IsValid() && ActorInfo->AbilitySystemComponent.IsValid()) //이펙트가 실행중이면
		{
			ActorInfo->AbilitySystemComponent->RemoveActiveGameplayEffect(ChargingEffectHandle); //이펙트 정지
			ChargingEffectHandle.Invalidate();//핸들 무효화
		}

		ACharacter* Character = Cast< ACharacter>(ActorInfo->AvatarActor.Get());
		if (Character)
		{
			float ChargeRatio = FMath::Clamp(CurrentChargingTime / MaxChargingTime, 0.0f, 1.0f); //차지된 %
			float JumpPower = FMath::Lerp(MinJumpPower, MaxJumpPower, ChargeRatio); //보간으로 중간값 구하기

			FVector Direction(1, 0, 1);
			Direction.Normalize(); //앞쪽 위 45도 방향
			Direction = Character->GetActorRotation().RotateVector(Direction);
			Character->LaunchCharacter(Direction * JumpPower, false, false); //캐릭터 날리기
		}
	}
}
