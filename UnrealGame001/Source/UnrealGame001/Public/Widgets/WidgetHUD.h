// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetHUD.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAME001_API UWidgetHUD : public UUserWidget
{
	GENERATED_BODY()
public:
	UWidgetHUD(const FObjectInitializer& ObjectInitializer);
	void NativeOnInitialized() override;

protected:
	UPROPERTY(BlueprintReadOnly,meta=(BindWidget))
	class UProgressBar* Health;

public:
	void SetHealth(float ratio);
};
