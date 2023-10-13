// Fill out your copyright notice in the Description page of Project Settings.


#include "FireAnimNotify.h"
#include "../Public/Core/BaseCharacterEventGraph.h"
#include "../UnrealGame001.h"

void UFireAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
 	UE_LOG(Game, Error, TEXT("notify hit"));

	animBP = Cast<UBaseCharacterEventGraph>(Animation);
	if (animBP != nullptr)
	{
		animBP->AnimEnded();
	}
	else
	{
		UE_LOG(Game, Error, TEXT("cast fail"));
	}
	
}
