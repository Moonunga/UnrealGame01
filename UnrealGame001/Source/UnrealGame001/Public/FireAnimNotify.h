// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FireAnimNotify.generated.h"

/**
 * 
 */


UCLASS()
class UNREALGAME001_API UFireAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
	
private:
	
	virtual void Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) override;

	class UBaseCharacterEventGraph* animBP;
};
