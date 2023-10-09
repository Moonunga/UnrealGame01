// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseRifle.generated.h"


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

	bool busy = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void Attack();

private:
	bool canAttack();

	void finishAttack();
};
