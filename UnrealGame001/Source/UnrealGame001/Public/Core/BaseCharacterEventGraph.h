// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseCharacterEventGraph.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAME001_API UBaseCharacterEventGraph : public UAnimInstance
{
	GENERATED_BODY()
public:
	void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(BlueprintReadWrite ,VisibleAnywhere)
	float Speed;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float Direction;

	UAnimInstance* animinstance = this->animinstance;
	
};
