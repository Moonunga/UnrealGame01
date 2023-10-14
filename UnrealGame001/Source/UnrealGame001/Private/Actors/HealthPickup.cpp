// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/HealthPickup.h"
#include "../../Public/Interfaces/PickupInterface.h"

AHealthPickup::AHealthPickup()
{
	Damage = -1.5;
	GetRootComponent()->SetRelativeScale3D(FVector(1.5f, 1.5f, 2.0f));
}

bool AHealthPickup::CanPickup(AActor* otheractor)
{
	IPickupInterface* I = Cast<IPickupInterface>(otheractor);
	if (nullptr != I)
	{
		return I->PickupHealth();
	}
	else
	{
		return false;
	}
}

void AHealthPickup::PostPickup()
{
	Destroy();
}
