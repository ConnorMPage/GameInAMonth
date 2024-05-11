// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlameThrower.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;
class UTimelineComponent;
UCLASS()
class GAMEINAMONTH_API AFlameThrower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlameThrower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* FlameThrowerMesh;
	UPROPERTY(BlueprintReadOnly)
	USceneComponent* FireSpawnLocation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UNiagaraComponent* FlameSystem;
	UPROPERTY()
	UTimelineComponent* FlameTimeline;
public:
	UFUNCTION()
	void RefillAmmo();
	UFUNCTION()
	void FireWeapon();
	UFUNCTION()
	void StopWeapon();
	UFUNCTION(BlueprintImplementableEvent)
	void BpFireEvent();
	UFUNCTION(BlueprintImplementableEvent)
	void BpStopEvent();
	UFUNCTION(BlueprintCallable)
	void ExecuteDamageOnTarget(AActor* ActorToBeDamaged);
	UFUNCTION()
	void Reload();
	UFUNCTION()
	void SetWeapon(bool WeaponSelect);
	UFUNCTION()
	int GetTotalFuel();
	UFUNCTION()
	int GetFuelInMag();
	UFUNCTION()
	int GetMagMax();
private:
	UPROPERTY(EditAnywhere)
	float WeaponDamage = 10.0f;

	UPROPERTY(VisibleAnywhere)
	FVector ProjectileSpawnLocation = FVector(5.0f, 0.0f, 0.0f);
	UPROPERTY(VisibleAnywhere)
	FRotator ProjectileSpawnRotation = FRotator(0.0f, -90.0f, 0.0f);
	UPROPERTY()
	bool IsActive = false;
	UPROPERTY()
	bool IsPrimary = true;

	UPROPERTY(EditAnywhere)
	int MagCapacity = 100;
	UPROPERTY(EditAnywhere)
	int FuelInMag = MagCapacity;

	UPROPERTY(EditAnywhere)
	int TotalFuel = 1000;

	UPROPERTY(EditAnywhere)
	int BonusFuel = 250;
	UPROPERTY(EditAnywhere)
	int EmptyMag = 0;
};
