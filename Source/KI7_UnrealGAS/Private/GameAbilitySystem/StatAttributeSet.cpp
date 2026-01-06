// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAbilitySystem/StatAttributeSet.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UStatAttributeSet::UStatAttributeSet()
{
	InitMoveSpeed(500.0f);
	InitJumpPower(700.0f);
}

void UStatAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetMoveSpeedAttribute())
	{
		AActor* OwningActor = GetOwningActor();
		ACharacter* OwninChar = Cast<ACharacter>(OwningActor);
		if (OwninChar)
		{
			OwninChar->GetCharacterMovement()->MaxWalkSpeed = NewValue;
		}
	}
}
