// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/GameMainMenu.h"
#include "../../Public/CodeGameInstance.h"
#include "../../UnrealGame001.h"
#include "../../Public/Widgets/ButtonWithText.h"
#include "Components/Button.h"

void UGameMainMenu::NativeOnInitialized()
{
	 
	gameinstance = Cast<UCodeGameInstance>(GetWorld()->GetGameInstance());

	if(gameinstance)
	{
		playButton->BackGroundButton->OnClicked.AddDynamic(gameinstance, &UCodeGameInstance::LoadFirstLevel);
		quitButton->BackGroundButton->OnClicked.AddDynamic(gameinstance, &UCodeGameInstance::QuitGame);
	}
	else
	{
		UE_LOG(Game, Error, TEXT("fail casting gameinstance"));
	}

	

}
