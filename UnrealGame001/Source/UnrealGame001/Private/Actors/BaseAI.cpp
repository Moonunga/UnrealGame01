// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseAI.h"

ABaseAI::ABaseAI()
{
	//Super::ABaseCharacter();
	PrimaryActorTick.bStartWithTickEnabled = true;

}

void ABaseAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CharacterAttack();
}

void ABaseAI::BeginPlay()
{
	Super::BeginPlay();

}
