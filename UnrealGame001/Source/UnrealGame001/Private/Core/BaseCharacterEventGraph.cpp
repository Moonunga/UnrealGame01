// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/BaseCharacterEventGraph.h"
#include "../../UnrealGame001.h"

void UBaseCharacterEventGraph::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	APawn* Pawn = TryGetPawnOwner();

	if (nullptr != Pawn)
	{
		//Is Valid
		Speed = Pawn->GetVelocity().Size();
		Direction = CalculateDirection(Pawn->GetVelocity(), Pawn->GetActorRotation());

	}
	else
	{
		//Is not Valid
		PersonaUpdate();
	}
}

void UBaseCharacterEventGraph::PersonaUpdate()
{
	if (DebugFire)
	{
		FireAnimation(0.0f);
		DebugFire = false;
	}

	if (DebugHit)
	{
		HitAnimation(0.0f);
		DebugHit = false;
	}

	if (DebugDeath)
	{
		DeathAnimation(0.0f);
		DebugDeath = false;
	}
}

void UBaseCharacterEventGraph::FireAnimation(float junk)
{
	PlaySlotAnimationAsDynamicMontage(FireAsset,ActionSlotName);
	//UE_LOG(Game, Error, TEXT("FireAnimation"));
}

void UBaseCharacterEventGraph::HitAnimation(float junk)
{
	PlaySlotAnimationAsDynamicMontage(HitAsset, ActionSlotName);
	//UE_LOG(Game, Error, TEXT("HitAnimation"));
}

void UBaseCharacterEventGraph::DeathAnimation(float junk)
{
	int randomm = FMath::RandRange(0, DeathAssets.Num()-1);
	//random implement
	CurrentDeath = DeathAssets[randomm];
}

void UBaseCharacterEventGraph::AnimEnded()
{
	OnAnimEnded.Broadcast();
}


