// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseRifle.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRifleDelegate, float, Amount);

UCLASS()
class UNREALGAME001_API ABaseRifle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseRifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	TSubclassOf<class ABaseBullet> BulletClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;

	APawn* ParentPawn;

	bool busy;

	FTimerHandle ResetTimerHandle;

	bool dead;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void Attack();

	FRifleDelegate OnBulletCreate;

	UFUNCTION()
	void finishAttack();

	UFUNCTION()
	void SetDeath(float junk);

private:
	bool canAttack();

	

};
