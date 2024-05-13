// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "ThePlayerControllerClass.generated.h"
class AMainGameMode;
/**
 * 
 */
UCLASS()
class GAMEINAMONTH_API AThePlayerControllerClass : public APlayerController
{
	GENERATED_BODY()
	
public:

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
private:
	UFUNCTION()
	void UpdateHUDStats();
	UFUNCTION()
	void LoadEndGame();
	UFUNCTION(BlueprintPure)
	float GetHealthPerc();
	UFUNCTION(BlueprintPure)
	float GetFuelInMagPerc();
	UFUNCTION(BlueprintPure)
	int GetTotalFuelAmount();
	
	UFUNCTION(BlueprintPure)
	int GetTotalBulletAmount();

	UFUNCTION(BlueprintPure)
	int GetBulletsInMag();
	UFUNCTION(BlueprintPure)
	int GetGrenades();
	UPROPERTY(VisibleAnywhere)
	AMainGameMode* GameModeRef;
	UPROPERTY()
	APawn* PlayerCharacterRef;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> CrosshairClass;
	UPROPERTY()
	UUserWidget* CrosshairUI;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> MiniMapClass;
	UPROPERTY()
	UUserWidget* MiniMapUI;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> HUDClass;
	UPROPERTY()
	UUserWidget* HUDUI;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> WinClass;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> OOTClass;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> DeadClass;
	UPROPERTY()
	UUserWidget* EndScreen;
	UPROPERTY()
	int MaxMag = 1;
	UPROPERTY()
	int FuelInMag = 1;
	UPROPERTY()
	int TotalFuel = 1;
	UPROPERTY()
	float HealthAmount = 1;
	UPROPERTY()
	float MAXHealth = 1;


	UPROPERTY()
	int BulletsInMag = 1;
	UPROPERTY()
	int TotalBullets = 1;
	UPROPERTY()
	int AmountOfGrenades = 1;
	UPROPERTY()
	int CWon = 1;
	UPROPERTY()
	int COutOfTime = 2;
	UPROPERTY()
	int CLoss = 3;
};
