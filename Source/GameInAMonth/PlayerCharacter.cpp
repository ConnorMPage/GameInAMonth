// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->SetNotifyRigidBodyCollision(true);

	SpringArmForMainCam = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraAttachmentArm"));
	SpringArmForMainCam->SetupAttachment(FindComponentByClass<USkeletalMeshComponent>()); // attaches to the character mesh

	//create camera
	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	MainCamera->SetupAttachment(SpringArmForMainCam);//attaches to spring arm

	//sets spring arm values
	SpringArmForMainCam->TargetArmLength = SpringArmLength;
	SpringArmForMainCam->SetRelativeLocation(SpringArmLocation);
	//sets camera values
	MainCamera->SetRelativeLocation(OriginalCamLocation);
	MainCamera->SetRelativeRotation(OriginalCamRotation);


	//creates the characters weapon
	CharacterWeapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Player Weapon"));
	FName fnWeaponSocket = TEXT("Weapon");
	CharacterWeapon->SetupAttachment(GetMesh(), fnWeaponSocket);//attaches to hand socket
	CharacterWeapon->SetRelativeLocation(WeaponLocation);

	//creates fire spawn point
	FireSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Fire Spawn Location"));
	FName fnMuzzle = TEXT("Muzzle");
	FireSpawnLocation->SetupAttachment(CharacterWeapon, fnMuzzle);//attaches to muzzle socket on gun
	FireSpawnLocation->SetRelativeLocation(ProjectileSpawnLocation);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//d#
	PlayerInputComponent->BindAxis(TEXT("ForwardMovement"), this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Strafe"), this, &APlayerCharacter::SideMovement);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APlayerCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &APlayerCharacter::Turn);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Crouch"), IE_Pressed, this, &APlayerCharacter::BeginCrouch);
	PlayerInputComponent->BindAction(TEXT("Crouch"), IE_Released, this, &APlayerCharacter::CrouchFinished);

	//Action Bindings
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &APlayerCharacter::FireWeapon);
}

void APlayerCharacter::MoveForward(float MoveAmount)
{
	AddMovementInput(GetActorForwardVector() * MoveAmount);
}

void APlayerCharacter::SideMovement(float MoveAmount)
{
	AddMovementInput(GetActorRightVector() * MoveAmount);
}

void APlayerCharacter::LookUp(float MoveAmount)
{
	AddControllerPitchInput(MoveAmount);
}

void APlayerCharacter::Turn(float MoveAmount)
{
	AddControllerYawInput(MoveAmount);
}

void APlayerCharacter::BeginCrouch()
{
	APlayerCharacter::Crouch();
}

void APlayerCharacter::CrouchFinished()
{
	APlayerCharacter::UnCrouch();
}

void APlayerCharacter::FireWeapon()
{

}
