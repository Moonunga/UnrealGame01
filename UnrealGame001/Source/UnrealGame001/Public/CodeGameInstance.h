// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CodeGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAME001_API UCodeGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
protected:
	TArray<FName> Levels = {"CodeMainMenu","CodeLevel"};

	int FirstLevelIndex = 1;



public:
	UFUNCTION()
	void LoadFirstLevel();

	UFUNCTION()
	void QuitGame();


};
