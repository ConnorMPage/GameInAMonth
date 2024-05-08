// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "FlameThrower.h"
#include "Kismet/GameplayStatics.h"

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



	
	//creates fire spawn point
	
	FireSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Fire Spawn Location"));
	FName fnMuzzle = TEXT("Muzzle");
//	FireSpawnLocation->SetupAttachment(CharacterWeapon, fnMuzzle);//attaches to muzzle socket on gun
	//FireSpawnLocation->SetRelativeLocation(ProjectileSpawnLocation);


	//creates map arm
	MapArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MapAttachmentArm"));
	MapArm->SetupAttachment(FindComponentByClass<USkeletalMeshComponent>());//attaches to mesh
	//creates map camera
	MapCamera = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("MapCamera"));
	MapCamera->SetupAttachment(MapArm);
	//sets map arm values
	MapArm->SetRelativeLocation(MapArmPosition);
	MapArm->SetRelativeRotation(MapArmRotation);
	MapArm->TargetArmLength = MapArmLength;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	
	Super::BeginPlay();
	if (IsPlayer == false)//checks if its the player or AI
	{
		MapCamera->DestroyComponent();//destroys the camera of AI charcters 
	}
	FName fnWeaponSocket = TEXT("Weapon");
	TheFlameThrower = GetWorld()->SpawnActor<AFlameThrower>(FlameThrowerClass);
	TheFlameThrower->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, fnWeaponSocket);
	TheFlameThrower->SetActorRelativeLocation(WeaponLocation);

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
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &APlayerCharacter::ZoomIn);
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Released, this, &APlayerCharacter::ZoomOut);
}

void APlayerCharacter::RefuelWeapon()
{
	TheFlameThrower->RefillAmmo();
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

void APlayerCharacter::ZoomIn()
{
	SpringArmForMainCam->TargetArmLength = ZoomedSpringArmLength;
}

void APlayerCharacter::ZoomOut()
{
	SpringArmForMainCam->TargetArmLength = SpringArmLength;//moves spring arm further from character
	MainCamera->SetRelativeLocation(OriginalCamLocation);
}

float APlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	return 0.0f;
}
