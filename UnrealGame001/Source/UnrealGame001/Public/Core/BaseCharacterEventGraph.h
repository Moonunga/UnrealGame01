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
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool DebugFire;

	UFUNCTION()
	void PersonaUpdate();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ActionSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequenceBase* FireAsset;

public:

	UFUNCTION()
	void FireAnimation();

};
