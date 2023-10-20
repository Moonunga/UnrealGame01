// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseCharacter.h"
#include "Components/ChildActorComponent.h"
#include "../../Public/Actors/BaseRifle.h"
#include "../../UnrealGame001.h"
#include "../../Public/Core/BaseCharacterEventGraph.h"
#include "../../Public/Components/HealthComponent.h"


// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bStartWithTickEnabled = false;
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));

	WeaponChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponChildActorComponent"));
	WeaponChildActorComponent->SetupAttachment(GetMesh(), FName("WeaponSocket"));

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

}



// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();	
	
	WeaponChildActorComponent->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform,FName("WeaponSocket"));
	WeaponChildActorComponent->SetChildActorClass(WeaponClass);
	
	CurrentWeapon = Cast<ABaseRifle>(WeaponChildActorComponent->GetChildActor());
	if (!CurrentWeapon)
	{
		UE_LOG(Game, Error, TEXT("Fail WeaponCast"));
		Destroy();
		return;
	}

	AnimBP = Cast<UBaseCharacterEventGraph>(GetMesh()->GetAnimInstance());
	if (!AnimBP)
	{
		UE_LOG(Game, Error, TEXT("Fail AnimInstanceCast"));
		Destroy();
		return;
	}
		
	//OnBulletCreated delegate
	CurrentWeapon->OnBulletCreate.AddDynamic(AnimBP, &UBaseCharacterEventGraph::FireAnimation);
	
	//OnHurt delegate
	HealthComponent->OnHurt.AddDynamic(AnimBP,&UBaseCharacterEventGraph::HitAnimation);
	
	//OnAnimEnded delegate
	AnimBP->OnAnimEnded.AddDynamic(CurrentWeapon,&ABaseRifle::finishAttack);
	
	//Ondeath delegate
	HealthComponent->OnDeath.AddDynamic(this, &ABaseCharacter::CharacterDeath);

}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseCharacter::CharacterAttack()
{
	//weapon attack
	CurrentWeapon->Attack();
	
	//fire animation
	//AnimBP->FireAnimation(0.0f);

}

void ABaseCharacter::CharacterDeath(float junk)
{
	AnimBP->DeathAnimation(junk);
	CurrentWeapon->SetDeath(junk);
	this->SetActorEnableCollision(false);
}

