// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/BaseCharacterEventGraph.h"

void UBaseCharacterEventGraph::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	APawn* Pawn = TryGetPawnOwner();

	if (nullptr != Pawn)
	{
		//Is Valid
		Speed = Pawn->GetVelocity().Size();
		Direction = animinstance->CalculateDirection(Pawn->GetVelocity(), Pawn->GetActorRotation());

	}
	else
	{
		//Is not Valid
	}
}
