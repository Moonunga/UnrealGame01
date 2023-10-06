// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseBullet.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
ABaseBullet::ABaseBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	SetRootComponent(Collision);

	// Projectile Movement initializing
	Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Bullet Movement"));
	Movement->InitialSpeed = 1800.f;
	Movement->MaxSpeed = 2000.f;
	Movement->ProjectileGravityScale = 0.0f;

	// Mesh initializing
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	Mesh->SetStaticMesh(SphereAsset.Object);

	Mesh->SetCollisionProfileName("NoCollision");
}

// Called when the game starts or when spawned
void ABaseBullet::BeginPlay()
{
	Super::BeginPlay();
	
	FVector scale = { 0.2f,0.2f,0.2f };
	Collision->SetWorldScale3D(scale);

	// Destroy base on timer
	FTimerHandle handle;
	GetWorld()->GetTimerManager().SetTimer(handle,this, &ABaseBullet::K2_DestroyActor,3.f);

	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABaseBullet::HandleOverlap);

}

// Called every frame
void ABaseBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseBullet::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Destroy();
}


/*
* factorspawnparameter spawnparms;
* spawnparms.owner = nullptr;
* spawnparms.instigator = this;
* 
* * getworld->spawnactor<aactor>(classtype,getactor().rotation, actor.location,spawnparms);

*/
