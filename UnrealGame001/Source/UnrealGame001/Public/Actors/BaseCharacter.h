 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/PickupInterface.h"
#include "BaseCharacter.generated.h"

UCLASS(Abstract)
class UNREALGAME001_API ABaseCharacter : public ACharacter,public IPickupInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UChildActorComponent* WeaponChildActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class ABaseRifle> WeaponClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ABaseRifle* CurrentWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBaseCharacterEventGraph* AnimBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UHealthComponent* HealthComponent;

	UFUNCTION()
	virtual void CharacterDeath(float junk);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CharacterAttack();

	
};
