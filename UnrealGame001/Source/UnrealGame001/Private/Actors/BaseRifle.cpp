// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseRifle.h"
#include "Components/SkeletalMeshComponent.h"
#include "../../Public/Actors/BaseBullet.h"
#include "../../UnrealGame001.h"

// Sets default values
ABaseRifle::ABaseRifle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	Mesh->SetCollisionProfileName("NoCollision");
	
}

// Called when the game starts or when spawned
void ABaseRifle::BeginPlay()
{
	Super::BeginPlay();
	
	ParentPawn = Cast<APawn>(GetParentActor());
	if (!ParentPawn)
	{
		UE_LOG(Game, Error, TEXT("Fail PawnCast"));
		Destroy();
	}
}

void ABaseRifle::Attack()
{
	if (canAttack())
	{

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = nullptr;
		SpawnParams.Instigator = ParentPawn;

		GetWorld()->SpawnActor<ABaseBullet>(BulletClass, Mesh->GetSocketLocation(SocketName), ParentPawn->GetBaseAimRotation(), SpawnParams);

		busy = true;

		FTimerHandle handle;
		GetWorld()->GetTimerManager().SetTimer(handle, this, &ABaseRifle::finishAttack, 2.f);
	}
}

bool ABaseRifle::canAttack()
{
	return !busy;
}

void ABaseRifle::finishAttack()
{
	busy = false;
}

// Called every frame
void ABaseRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

