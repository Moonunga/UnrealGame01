// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonWithText.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FButtonDelegate);

UCLASS()
class UNREALGAME001_API UButtonWithText : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FText setText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock* Information;

	void NativeOnInitialized() override;

public:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButton* BackGroundButton;

	UPROPERTY()
	FButtonDelegate OnButtonClicked;

	UFUNCTION()
	void broadcast();
};
