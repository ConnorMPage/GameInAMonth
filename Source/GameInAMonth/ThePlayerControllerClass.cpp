// Fill out your copyright notice in the Description page of Project Settings.


#include "ThePlayerControllerClass.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "FlameThrower.h"
void AThePlayerControllerClass::BeginPlay()
{
	Super::BeginPlay();

	CrosshairUI = CreateWidget(this, CrosshairClass);
	if (CrosshairUI != nullptr)CrosshairUI->AddToViewport();

	MiniMapUI = CreateWidget(this, MiniMapClass);
	if (MiniMapUI != nullptr)MiniMapUI->AddToViewport();

	HUDUI = CreateWidget(this, HUDClass);
	if (HUDUI != nullptr)HUDUI->AddToViewport();
}

void AThePlayerControllerClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateHUDStats();

}

void AThePlayerControllerClass::UpdateHUDStats()
{
	
}

float AThePlayerControllerClass::GetHealthPerc()
{
	return (HealthAmount/MAXHealth)*100;
}

float AThePlayerControllerClass::GetFuelInMagPerc()
{
	return (FuelInMag/MaxMag) * 100;
}

int AThePlayerControllerClass::GetTotalFuelAmount()
{
	return TotalFuel;
}
