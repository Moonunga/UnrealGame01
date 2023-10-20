// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseRifle.h"
#include "Components/SkeletalMeshComponent.h"
#include "../../Public/Actors/BaseBullet.h"
#include "../../UnrealGame001.h"
#include "../../Public/Widgets/WidgetHUD.h"

// Sets default values
ABaseRifle::ABaseRifle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	Mesh->SetCollisionProfileName("NoCollision");
	
	busy = false;
	dead = false;
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
	if (canAttack() == true)
	{

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = nullptr;
		SpawnParams.Instigator = ParentPawn;

		GetWorld()->SpawnActor<ABaseBullet>(BulletClass,GetSpawnPoint(), ParentPawn->GetBaseAimRotation(), SpawnParams);

		busy = true;

		GetWorld()->GetTimerManager().SetTimer(ResetTimerHandle ,this, &ABaseRifle::finishAttack, 2.f);

		OnBulletCreate.Broadcast(0.0f);
	}
}

void ABaseRifle::SetDeath(float junk)
{
	dead = true;
}

FVector ABaseRifle::GetSpawnPoint()
{
	return Mesh->GetSocketLocation(SocketName);
}

bool ABaseRifle::canAttack()
{

	return (!busy && !dead);
}

void ABaseRifle::finishAttack()
{
	busy = false;

	GetWorld()->GetTimerManager().ClearTimer(ResetTimerHandle);
}

// Called every frame
void ABaseRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

