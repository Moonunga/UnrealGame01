// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "BasePlayer.generated.h"


/**
 * 
 */
UCLASS()
class UNREALGAME001_API ABasePlayer : public ABaseCharacter
{
	GENERATED_BODY()
public:
	ABasePlayer();
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

private:
	void InputAxisForward(float AxisValue);

	void InputAxisRight(float AxisValue);

};
