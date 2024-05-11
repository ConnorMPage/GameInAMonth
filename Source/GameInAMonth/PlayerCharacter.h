// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Camera/CameraComponent.h"
#include "PlayerCharacter.generated.h"
class AFlameThrower;
UCLASS()
class GAMEINAMONTH_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	//List of Objects & Classes 
	UPROPERTY(EditAnywhere)
	UCameraComponent* MainCamera;
	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArmForMainCam;
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* CharacterWeapon;
	UPROPERTY(EditAnywhere)
	AFlameThrower* TheFlameThrower;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AFlameThrower> FlameThrowerClass;
	UPROPERTY(EditAnywhere)
	USpringArmComponent* MapArm;//creates springarm for the map camera
	UPROPERTY(EditAnywhere)
	USceneCaptureComponent2D* MapCamera;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> GrenadeClass;
	UPROPERTY(EditAnywhere)
	USoundBase* GunShotSound;
	//--------------------------------------
	//Vector * Rotator List
	UPROPERTY(VisibleAnywhere)
	FVector OriginalCamLocation = FVector(0.85f, 60.0f, 132.58f);//original camera location
	UPROPERTY(VisibleAnyWhere)
	FRotator OriginalCamRotation = FRotator(0, -25, 0);//Original Camera Rotation

	UPROPERTY(VisibleAnywhere)
	FVector SpringArmLocation = FVector(0.0f, 0.0f, 90.0f);//location of the spring arm
	UPROPERTY(VisibleAnywhere)
	float SpringArmLength = 200.0f;//Length of Springarm

	UPROPERTY(VisibleAnywhere)
	float ZoomedSpringArmLength = 50.0f;//Length of Springarm while zoomed

	UPROPERTY(VisibleAnywhere)
	FVector WeaponLocation = FVector(0.0f, 0.0f, -4.0f);// location of player weapon
	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* GrenadeSpawnLocation;
	
	UPROPERTY(VisibleAnywhere)
	FVector ProjectileSpawnLocation = FVector(5.0f, 0.0f, 0.0f);

	//MiniMap Variables
	UPROPERTY(VisibleAnywhere)
	FRotator MapArmRotation = FRotator(0.0f, -90.0f, -90.0f);//rotation of map arm
	UPROPERTY(VisibleAnywhere)
	FVector MapArmPosition = FVector(0.0f, 0.0f, 130.0f);//location of map arm
	UPROPERTY(EditAnywhere)
	float MapArmLength = 500.0f;// length of map arm

	//Boolean Variables
	UPROPERTY(EditAnywhere)
	bool IsPlayer = true;
	UPROPERTY(EditAnywhere)
	bool IsDead = false;
	UPROPERTY(EditAnywhere)
	bool IsPrimary = true;
public:
	UFUNCTION()
	void RefuelWeapon();
	UFUNCTION()
	void AddHealth();


	//getter Functions 
	UFUNCTION()
	int GetFuelInMag();
	UFUNCTION()
	int GetMaxMag();
	UFUNCTION()
	int GetFuelTotal();

	UFUNCTION()
	float GetHealth();
	UFUNCTION()
	float GetMaxHealth();

	UFUNCTION()
	int GetBulletsInMag();
	UFUNCTION()
	int GetTotalBullets();

	UFUNCTION()
	int GetGrenades();
private:
	//player stats
	UPROPERTY(EditAnywhere)
	float MAXPLAYERHEALTH = 100.0f;
	UPROPERTY(EditAnywhere)
	float ADDHEALTHAMOUNT = 25.0f;
	UPROPERTY(EditAnywhere)
	float PlayerHealth = MAXPLAYERHEALTH;
	UPROPERTY(EditAnywhere)
	float NoHealth = 0.0f;
	UPROPERTY(EditAnywhere)
	int GrenadeCapacity = 3;
	UPROPERTY()
	int AmountOfGrenades = GrenadeCapacity;
	UPROPERTY(EditAnywhere)
	int EmptyMag = 0;

	//rifle variables
	UPROPERTY(EditAnywhere)
	int AmountOfBullets = 75;
	UPROPERTY(EditAnywhere)
	int BonusBullets = 30;
	UPROPERTY(EditAnywhere)
	int MaxBulletMagCapacity = 15;
	UPROPERTY(EditAnywhere)
	int AmountOfBulletsInMag = MaxBulletMagCapacity;
	UPROPERTY(EditAnywhere)
	float RifleWeaponDamage = 25.0f;
	UPROPERTY(EditAnywhere)
	float RifleCastRange = 5000.0f;


	//Movement Functions
	UFUNCTION()
	void MoveForward(float MoveAmount);
	UFUNCTION()
	void SideMovement(float MoveAmount);
	UFUNCTION()
	void LookUp(float MoveAmount);
	UFUNCTION()
	void Turn(float MoveAmount);
	UFUNCTION()
	void BeginCrouch();
	UFUNCTION()
	void CrouchFinished();
	//----------------------------------------
	//Action Functions 
	UFUNCTION()
	void FireWeapon();
	UFUNCTION()
	void StopFireWeapon();
	UFUNCTION()
	void ReloadWeapon();
	UFUNCTION()
	void ZoomIn();
	UFUNCTION()
	void ZoomOut();
	UFUNCTION()
	void FireGrenade();
	UFUNCTION()
	void SetPrimary();
	UFUNCTION()
	void SetSecondary();

	UFUNCTION()
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser) override;
};
