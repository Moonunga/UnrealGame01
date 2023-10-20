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

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;


protected:
	UPROPERTY(BlueprintReadOnly,meta=(BindWidget))
	class UProgressBar* Health;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UImage* Crosshair;

	class UMaterialInstanceDynamic* DynamicMaterial;

	FVector Destination;

	FName ColorName;

	FLinearColor overnothing   = { 0.1,0.7,0.7,0.0 };
	FLinearColor oversomething = { 0.8,0.2,0.2,0.0 };


public:
	void SetHealth(float ratio);

	FVector GetWorldPosition(FVector worldPosition);

	FVector2D GetCenterPoint() const;

	FVector2D GetTopLeftPoint() const;

	FVector GetDestination() const;

private:
	
	void SetColor(FLinearColor color);
};
