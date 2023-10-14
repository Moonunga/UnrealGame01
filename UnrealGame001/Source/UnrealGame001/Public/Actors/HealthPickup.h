// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/DamagePickup.h"
#include "HealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAME001_API AHealthPickup : public ADamagePickup
{
	GENERATED_BODY()
public:
	AHealthPickup();

	bool CanPickup(AActor* otheractor)override;

protected:
	void PostPickup()override;
	
};
