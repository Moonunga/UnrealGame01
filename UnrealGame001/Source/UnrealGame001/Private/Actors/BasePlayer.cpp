// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


ABasePlayer::ABasePlayer()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetRelativeLocation(FVector(0.f,0.f,60.f));
	SpringArm->bUsePawnControlRotation = true;

	//Camera Setting
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	
}

void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Player Turn
	PlayerInputComponent->BindAxis("Turn",this,&ABasePlayer::AddControllerYawInput); 

	//Player LookUp
	PlayerInputComponent->BindAxis("LookUp", this, &ABasePlayer::AddControllerPitchInput);

	//Player Move Forward
	PlayerInputComponent->BindAxis("Forward",this, &ABasePlayer::InputAxisForward);

	//Player Move Right
	PlayerInputComponent->BindAxis("Right", this, &ABasePlayer::InputAxisRight);
}

void ABasePlayer::InputAxisForward(float AxisValue)
{
	AddMovementInput(FRotator(0.f, GetControlRotation().Yaw, 0.f).Vector(), AxisValue);
}

void ABasePlayer::InputAxisRight(float AxisValue)
{
	AddMovementInput(FRotationMatrix(FRotator(0.f, GetControlRotation().Yaw, 0.f)).GetScaledAxis(EAxis::Y), AxisValue);
}
