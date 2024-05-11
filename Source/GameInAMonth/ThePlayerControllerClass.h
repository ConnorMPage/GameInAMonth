// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "ThePlayerControllerClass.generated.h"

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

	UPROPERTY()
	int MaxMag = {};
	UPROPERTY()
	int FuelInMag = {};
	UPROPERTY()
	int TotalFuel = {};
	UPROPERTY()
	float HealthAmount = {};
	UPROPERTY()
	float MAXHealth = {};


	UPROPERTY()
	int BulletsInMag = {};
	UPROPERTY()
	int TotalBullets = {};
	UPROPERTY()
	int AmountOfGrenades = {};
};
