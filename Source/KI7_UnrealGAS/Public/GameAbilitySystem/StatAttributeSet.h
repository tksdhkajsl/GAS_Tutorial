// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameAbilitySystemMacros.h"
#include "AbilitySystemComponent.h"
#include "StatAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class KI7_UNREALGAS_API UStatAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	UStatAttributeSet();
	// Instant타입의 이팩트가 적용된 직후에만 호출(Duration이나 Intinite는 실행안됨)
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	UPROPERTY(BlueprintReadOnly, Category = "Attribute")
	FGameplayAttributeData MoveSpeed;
	ATTRIBUTE_ACCESSORS(UStatAttributeSet, MoveSpeed)

	UPROPERTY(BlueprintReadOnly, Category = "Attribute")
	FGameplayAttributeData JumpPower;
	ATTRIBUTE_ACCESSORS(UStatAttributeSet, JumpPower)

};
