// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "PlayerCharacter.generated.h"

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
	USceneComponent* FireSpawnLocation;
	
	UPROPERTY(VisibleAnywhere)
	FVector ProjectileSpawnLocation = FVector(5.0f, 0.0f, 0.0f);

public:
	void RefuelWeapon();
private:
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
};
