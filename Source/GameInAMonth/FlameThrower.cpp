// Fill out your copyright notice in the Description page of Project Settings.
#include "FlameThrower.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Components/TimelineComponent.h"

// Sets default values
AFlameThrower::AFlameThrower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FlameThrowerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FlameThrower Mesh"));

	FireSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Fire Spawn Location"));
	FName fnMuzzle = TEXT("Muzzle");
	FireSpawnLocation->SetupAttachment(FlameThrowerMesh, fnMuzzle);//attaches to muzzle socket on gun
	FireSpawnLocation->SetRelativeLocation(ProjectileSpawnLocation);
	FireSpawnLocation->SetRelativeRotation(ProjectileSpawnRotation);
	FlameSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Flame NS"));
	FlameSystem->SetupAttachment(FireSpawnLocation);
	
	FlameTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Flame Timeline"));
}

// Called when the game starts or when spawned
void AFlameThrower::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlameThrower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsActive)
	{
		FuelInMag--;
		if (FuelInMag <= EmptyMag) FlameSystem->Deactivate();
	}
	
}

void AFlameThrower::RefillAmmo()
{
	UE_LOG(LogTemp, Warning, TEXT("WeaponRefueld"));
	TotalFuel += BonusFuel;
}

void AFlameThrower::FireWeapon()
{
	if (FuelInMag > EmptyMag)
	{
		IsActive = true;
		FlameSystem->Activate();
	}
	
	
}

void AFlameThrower::StopWeapon()
{
	
	IsActive = false;
	FlameSystem->Deactivate();
	

}

void AFlameThrower::Reload()
{
	UE_LOG(LogTemp, Warning, TEXT("Reload"));
	if (FuelInMag <= EmptyMag)//if mag is empty
	{
		if (MagCapacity <= TotalFuel)//if theres more than mag cap
		{
			FuelInMag = MagCapacity;//sets to max
			TotalFuel -= MagCapacity;//takes the max from reserves
		}
		else//less than 1 mag
		{
			FuelInMag += TotalFuel;//adds whats left
			TotalFuel -= TotalFuel;//empty reserves
		}
	}
	else if (FuelInMag < MagCapacity && FuelInMag > EmptyMag)//if mag is lower than 100 but above 0
	{
		int MagDifference = MagCapacity - FuelInMag;//finds the difference
		if (MagDifference <= TotalFuel)//checks if theres less bullts than th edifference
		{
			FuelInMag += MagDifference;//adds to mag
			TotalFuel -= MagDifference;//take sthe differnece
		}
		else
		{
			FuelInMag += TotalFuel;//adds to mag
			TotalFuel -= TotalFuel;//takes from reserves
		}
	}
}

int AFlameThrower::GetTotalFuel()
{
	return TotalFuel;
}

int AFlameThrower::GetFuelInMag()
{
	return FuelInMag;
}

int AFlameThrower::GetMagMax()
{
	return MagCapacity;
}

