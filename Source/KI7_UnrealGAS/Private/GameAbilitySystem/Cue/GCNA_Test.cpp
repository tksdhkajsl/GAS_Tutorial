// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAbilitySystem/Cue/GCNA_Test.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

AGCNA_Test::AGCNA_Test()
{
	GameplayCueTag = FGameplayTag::RequestGameplayTag(FName("GameplayCue.TestActor"));
}

bool AGCNA_Test::OnActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	if (SpawnedVFX.IsValid())
	{
		SpawnedVFX->Deactivate();
		SpawnedVFX = nullptr;
	}

	if (MyTarget)
	{
		SpawnedVFX = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),
			TestVFX,
			MyTarget->GetActorLocation(),
			MyTarget->GetActorRotation()
		);
		return true;
	}
	return false;
}

bool AGCNA_Test::OnRemove_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{

	if (SpawnedVFX.IsValid())
	{
		SpawnedVFX->Deactivate();
		SpawnedVFX = nullptr;
	}
	return true;
}
