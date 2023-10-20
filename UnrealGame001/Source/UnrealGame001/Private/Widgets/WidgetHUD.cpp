// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/WidgetHUD.h"
#include "Components/ProgressBar.h"
#include "../../UnrealGame001.h"
#include "Components/Image.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"


UWidgetHUD::UWidgetHUD(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	//The progress bar is not valid
	if (Health)
		UE_LOG(Game, Warning, TEXT("valid in the constructor"));
}

void UWidgetHUD::NativeOnInitialized()
{
	if (Health)
		UE_LOG(Game, Warning, TEXT("valid in the NativeOnInitialized"));


	DynamicMaterial = Crosshair->GetDynamicMaterial();

	ColorName = "Color";
}

void UWidgetHUD::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	FVector WorldPosition;
	WorldPosition = GetWorldPosition(WorldPosition);

	FHitResult Outhit;

	FCollisionObjectQueryParams ObjectParams;
	ObjectParams.AddObjectTypesToQuery(ECC_WorldStatic);
	ObjectParams.AddObjectTypesToQuery(ECC_Pawn);

	FCollisionQueryParams params;
	TArray<AActor*> array;
	array.Add(GetOwningPlayerPawn());
	params.AddIgnoredActors(array);
	
	if (GetWorld()->LineTraceSingleByObjectType(Outhit, WorldPosition, Destination, ObjectParams, params))
	{
		Destination = Outhit.ImpactPoint;

		if (Cast<APawn>(Outhit.Actor))
			SetColor(oversomething);
		else
			SetColor(overnothing);
	}
	else
	{
		SetColor(overnothing);
	}

	//Outhit.Actor
}

void UWidgetHUD::SetHealth(float ratio)
{
	Health->SetPercent(ratio);
}

FVector UWidgetHUD::GetWorldPosition(FVector worldPosition)
{
	FVector worldDestination;
	GetOwningPlayer()->DeprojectScreenPositionToWorld(GetCenterPoint().X, GetCenterPoint().Y, worldPosition, worldDestination);

	Destination = worldPosition + (worldDestination * 100000);

	return worldPosition;
}

FVector2D UWidgetHUD::GetCenterPoint() const
{
	return GetTopLeftPoint() + (Crosshair->GetCachedGeometry().GetAbsoluteSize() * 0.5);
}

FVector2D UWidgetHUD::GetTopLeftPoint() const
{
	FVector2D LocalCoordinate = {0,0};
	FVector2D PixelPosition;
	FVector2D ViewportPosition;

	USlateBlueprintLibrary::LocalToViewport(GetWorld(),Crosshair->GetCachedGeometry(), LocalCoordinate, PixelPosition, ViewportPosition);

	return PixelPosition;
}

FVector UWidgetHUD::GetDestination() const
{
	return Destination;
}

void UWidgetHUD::SetColor(FLinearColor color)
{
	DynamicMaterial->SetVectorParameterValue(ColorName,color);
}
