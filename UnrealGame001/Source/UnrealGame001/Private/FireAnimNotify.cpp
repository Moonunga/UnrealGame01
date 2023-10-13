// Fill out your copyright notice in the Description page of Project Settings.


#include "FireAnimNotify.h"
#include "../Public/Core/BaseCharacterEventGraph.h"
#include "../UnrealGame001.h"

void UFireAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	animBP = Cast<UBaseCharacterEventGraph>(MeshComp);
	if (!animBP)
	{
		
	}
	else
	{
		animBP->OnAnimEnded.Broadcast();
		UE_LOG(Game, Error, TEXT("notify success casting animinstance"));
	}
	
}
