// Fill out your copyright notice in the Description page of Project Settings.


#include "ThePlayerControllerClass.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "FlameThrower.h"
#include "MainGameMode.h"
void AThePlayerControllerClass::BeginPlay()
{
	Super::BeginPlay();
	PlayerCharacterRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);


	CrosshairUI = CreateWidget(this, CrosshairClass);
	if (CrosshairUI != nullptr)CrosshairUI->AddToViewport();

	MiniMapUI = CreateWidget(this, MiniMapClass);
	if (MiniMapUI != nullptr)MiniMapUI->AddToViewport();

	HUDUI = CreateWidget(this, HUDClass);
	if (HUDUI != nullptr)HUDUI->AddToViewport();


	GameModeRef = Cast<AMainGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
}

void AThePlayerControllerClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateHUDStats();
	if (!GameModeRef->GetGameState()) LoadEndGame();
}

void AThePlayerControllerClass::UpdateHUDStats()
{
	auto PlayerRef = Cast<APlayerCharacter>(PlayerCharacterRef);
	if (PlayerRef != nullptr)
	{
		HealthAmount = PlayerRef->GetHealth();
		MAXHealth = PlayerRef->GetMaxHealth();
		FuelInMag = PlayerRef->GetFuelInMag();
		MaxMag = PlayerRef->GetMaxMag();
		TotalFuel = PlayerRef->GetFuelTotal();
		BulletsInMag = PlayerRef->GetBulletsInMag();
		TotalBullets = PlayerRef->GetTotalBullets();
		AmountOfGrenades = PlayerRef->GetGrenades();
	}
}

void AThePlayerControllerClass::LoadEndGame()
{
	int WinScreenNum = GameModeRef->GetWinCon();
	if (WinScreenNum == CWon)EndScreen = CreateWidget(this, WinClass);
	if (WinScreenNum == COutOfTime)EndScreen = CreateWidget(this, OOTClass);
	else EndScreen = CreateWidget(this, DeadClass);
	if (EndScreen != nullptr)EndScreen->AddToViewport();
}

float AThePlayerControllerClass::GetHealthPerc()
{
	return (HealthAmount/MAXHealth)*100.0f;
}

float AThePlayerControllerClass::GetFuelInMagPerc()
{
	
	return (FuelInMag/MaxMag) * 100.0f;
}

int AThePlayerControllerClass::GetTotalFuelAmount()
{
	return TotalFuel;
}

int AThePlayerControllerClass::GetTotalBulletAmount()
{
	return TotalBullets;
}

int AThePlayerControllerClass::GetBulletsInMag()
{
	return BulletsInMag;
}

int AThePlayerControllerClass::GetGrenades()
{
	return AmountOfGrenades;
}
