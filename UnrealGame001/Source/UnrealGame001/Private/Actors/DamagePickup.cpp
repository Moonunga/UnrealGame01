// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/DamagePickup.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"


ADamagePickup::ADamagePickup()
{
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);
	ParticleSystem->SetRelativeScale3D(FVector(0.4f, 0.4f, 0.25f));
	ParticleSystem->SetRelativeLocation(FVector(0, 0, -30));
	ParticleSystem->SetComponentTickEnabled(false);

	GetRootComponent()->SetRelativeScale3D(FVector(1.6f, 1.6f, 1.6f));

	Damage = 2.0f;
}

void ADamagePickup::HandlePickup(AActor* OtherActor, const FHitResult& SweepResult)
{
	UGameplayStatics::ApplyDamage(OtherActor, Damage, nullptr,this, nullptr);
}

void ADamagePickup::PostPickup()
{

}
