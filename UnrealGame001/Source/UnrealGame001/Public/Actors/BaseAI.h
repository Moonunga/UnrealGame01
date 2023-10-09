// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "BaseAI.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAME001_API ABaseAI : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	ABaseAI();

	void Tick(float DeltaTime) override;
};
