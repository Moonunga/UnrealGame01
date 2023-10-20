// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UCodeGameInstance::LoadFirstLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), Levels[FirstLevelIndex]);
}

void UCodeGameInstance::QuitGame()
{
	 this->GetPrimaryPlayerController()->ConsoleCommand("quit");
}
