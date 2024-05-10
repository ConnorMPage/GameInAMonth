// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlameThrower.generated.h"

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
	UPROPERTY(VisibleAnywhere)
	USceneComponent* FireSpawnLocation;

public:
	UFUNCTION()
	void RefillAmmo();
	UFUNCTION()
	void FireWeapon();

private:
	UPROPERTY(VisibleAnywhere)
	FVector ProjectileSpawnLocation = FVector(5.0f, 0.0f, 0.0f);
};
