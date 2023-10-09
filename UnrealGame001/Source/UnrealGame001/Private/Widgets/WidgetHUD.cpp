// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/WidgetHUD.h"
#include "Components/ProgressBar.h"
#include "../../UnrealGame001.h"

UWidgetHUD::UWidgetHUD(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	//The progress bar is not valid
	if (Health)
		UE_LOG(Game, Warning, TEXT("valid in the constructor"));
}

void UWidgetHUD::NativeOnInitialized()
{
	if (Health)
		UE_LOG(Game, Warning, TEXT("valid in the NativeOnInitialized"));
}

void UWidgetHUD::SetHealth(float ratio)
{
	Health->SetPercent(ratio);
}
