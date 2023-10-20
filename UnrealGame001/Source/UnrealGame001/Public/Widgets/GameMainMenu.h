// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameMainMenu.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAME001_API UGameMainMenu : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	void NativeOnInitialized() override;

	class UCodeGameInstance* gameinstance;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButtonWithText* playButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButtonWithText* quitButton;
};
