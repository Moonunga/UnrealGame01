// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseCharacterEventGraph.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAnimDelegate);

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DebugHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DebugDeath;

	UFUNCTION()
	void PersonaUpdate();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ActionSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequenceBase* FireAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequenceBase* HitAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequenceBase* CurrentDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimSequenceBase*> DeathAssets;

public:

	UFUNCTION()
	void FireAnimation(float junk);

	UFUNCTION()
	void HitAnimation(float junk);

	UFUNCTION()
	void DeathAnimation(float junk);

	void AnimEnded();

	FAnimDelegate OnAnimEnded;

};
