// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerInput.h"


ABasePlayer::ABasePlayer()
{
	//parent construction??


	//Springarm setting
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocation(FVector(0.f, 80.f, 90.f));
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

	//Attack
	UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping(FName("Attack"),EKeys::LeftMouseButton));
	PlayerInputComponent->BindAction("Attack",EInputEvent::IE_Pressed,this,&ABaseCharacter::CharacterAttack);

	//Jump
	UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping(FName("Jump"), EKeys::SpaceBar));
	PlayerInputComponent->BindAction("Jump",EInputEvent::IE_Pressed,this,&ACharacter::Jump);
}

void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();
}

void ABasePlayer::InputAxisForward(float AxisValue)
{
	AddMovementInput(FRotator(0.f, GetControlRotation().Yaw, 0.f).Vector(), AxisValue);
}

void ABasePlayer::InputAxisRight(float AxisValue)
{
	AddMovementInput(FRotationMatrix(FRotator(0.f, GetControlRotation().Yaw, 0.f)).GetScaledAxis(EAxis::Y), AxisValue);
}
