// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BasePickup.h"
#include "DamagePickup.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAME001_API ADamagePickup : public ABasePickup
{
	GENERATED_BODY()
	
public:
	ADamagePickup();
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* ParticleSystem;

	void HandlePickup(AActor* OtherActor, const FHitResult& SweepResult)override;

	virtual void PostPickup()override;

	float Damage;

private:
	
};
