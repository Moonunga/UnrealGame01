// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/ButtonWithText.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"


void UButtonWithText::NativeOnInitialized()
{
	Information->SetText(setText);
	BackGroundButton->OnClicked.AddDynamic(this, &UButtonWithText::broadcast);
}

void UButtonWithText::broadcast()
{
	OnButtonClicked.Broadcast();
}




