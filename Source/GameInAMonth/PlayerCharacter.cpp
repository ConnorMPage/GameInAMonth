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

	//Creates fire spawn point
	GrenadeSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Grenade Spawn Location"));
	FName fnMuzzle = TEXT("Weapon");
	GrenadeSpawnLocation->SetupAttachment(CharacterWeapon, fnMuzzle);//attaches to muzzle socket on gun
	GrenadeSpawnLocation->SetRelativeLocation(ProjectileSpawnLocation);

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
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &APlayerCharacter::FireWeapon);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &APlayerCharacter::StopFireWeapon);
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &APlayerCharacter::ZoomIn);
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Released, this, &APlayerCharacter::ZoomOut);
	PlayerInputComponent->BindAction(TEXT("Reload"), IE_Pressed, this, &APlayerCharacter::ReloadWeapon);
	PlayerInputComponent->BindAction(TEXT("Grenade"), IE_Released, this, &APlayerCharacter::FireGrenade);
	PlayerInputComponent->BindAction(TEXT("Primary"), IE_Pressed, this, &APlayerCharacter::SetPrimary);
	PlayerInputComponent->BindAction(TEXT("Secondary"), IE_Pressed, this, &APlayerCharacter::SetSecondary);
}

void APlayerCharacter::RefuelWeapon()
{
	TheFlameThrower->RefillAmmo();
}

void APlayerCharacter::AddHealth()
{
	PlayerHealth += ADDHEALTHAMOUNT;//increases health
	UE_LOG(LogTemp, Warning, TEXT("Player Healed"));
	if (PlayerHealth > MAXPLAYERHEALTH)//if health is above max
	{
		PlayerHealth = MAXPLAYERHEALTH;//sets back to max
	}
}

int APlayerCharacter::GetFuelInMag()
{
	return TheFlameThrower->GetFuelInMag();
}

int APlayerCharacter::GetMaxMag()
{
	return TheFlameThrower->GetMagMax();
}

int APlayerCharacter::GetFuelTotal()
{
	return TheFlameThrower->GetTotalFuel();
}

float APlayerCharacter::GetHealth()
{
	return PlayerHealth;
}

float APlayerCharacter::GetMaxHealth()
{
	return MAXPLAYERHEALTH;
}

int APlayerCharacter::GetBulletsInMag()
{
	return AmountOfBulletsInMag;
}

int APlayerCharacter::GetTotalBullets()
{
	return AmountOfBullets;
}

int APlayerCharacter::GetGrenades()
{
	return AmountOfGrenades;
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

	if (IsPrimary)TheFlameThrower->FireWeapon();
	
}

void APlayerCharacter::StopFireWeapon()
{
	if (IsPrimary)TheFlameThrower->StopWeapon();
	else
	{
		if (AmountOfBulletsInMag > EmptyMag)
		{
			AmountOfBulletsInMag--;
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), GunShotSound, GetActorLocation(), 0.75f, 1.0f, 0.0f);//plays a gunshot sound effect
			AController* ControllerRef = GetController();//gets the controller
			FVector CamLocation;//camera location
			FRotator CamRotation;//camera rotation
			ControllerRef->GetPlayerViewPoint(CamLocation, CamRotation);//uses the location and rotation to get the cameras viewpoint 
			FVector End = CamLocation + CamRotation.Vector() * RifleCastRange;// gets the end point for a raytrace

			FHitResult Hit;
			bool bTargetHit = GetWorld()->LineTraceSingleByChannel(Hit, CamLocation, End, ECC_Visibility);//fires raytrace
			if (bTargetHit)//if a target is hit
			{
				UE_LOG(LogTemp, Warning, TEXT("Hit something: %s"), *Hit.GetActor()->GetName());//outputs the name of object hit by raytrace


				AActor* TraceOwner = GetOwner();
				if (TraceOwner == nullptr)
				{
					return;
				}
				UGameplayStatics::ApplyDamage(
					Hit.GetActor(), //actor that will be damaged
					RifleWeaponDamage, //the base damage to apply
					TraceOwner->GetInstigatorController(), //controller that caused the damage
					this, //Actor that actually caused the damage
					UDamageType::StaticClass() //class that describes the damage that was done
				);
			}

		}
	}
}

void APlayerCharacter::ReloadWeapon()
{
	if(IsPrimary)TheFlameThrower->Reload();
	else
	{
		if (AmountOfBulletsInMag == EmptyMag)//if mag is empty
		{
			if (MaxBulletMagCapacity <= AmountOfBullets)//if theres more than 15 bullets
			{
				AmountOfBulletsInMag = MaxBulletMagCapacity;//sets to max
				AmountOfBullets -= MaxBulletMagCapacity;//takes the max from reserves
			}
			else//less than 15
			{
				AmountOfBulletsInMag += AmountOfBullets;//adds whats left
				AmountOfBullets -= AmountOfBullets;//empty reserves
			}
		}
		else if (AmountOfBulletsInMag < MaxBulletMagCapacity && AmountOfBulletsInMag > EmptyMag)//if mag is lower than 15 but above 0
		{
			int MagDifference = MaxBulletMagCapacity - AmountOfBulletsInMag;//finds the difference
			if (MagDifference <= AmountOfBullets)//checks if theres less bullts than th edifference
			{
				AmountOfBulletsInMag += MagDifference;//adds to mag
				AmountOfBullets -= MagDifference;//take sthe differnece
			}
			else
			{
				AmountOfBulletsInMag += AmountOfBullets;//adds to mag
				AmountOfBullets -= AmountOfBullets;//takes from reserves
			}

		}
	}
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

void APlayerCharacter::FireGrenade()
{
	if (AmountOfGrenades > EmptyMag)
	{
		if (GrenadeClass)
		{
			AmountOfGrenades--;
			FVector SpawnLocation = GrenadeSpawnLocation->GetComponentLocation();//location of spawn point
			FRotator SpawnRotation = GrenadeSpawnLocation->GetComponentRotation();//rotation of spawnpoint
			AActor* TempGrenade = GetWorld()->SpawnActor<AActor>(GrenadeClass, SpawnLocation, SpawnRotation);//creates the grenade
			TempGrenade->SetOwner(this);
		}
	}
}

void APlayerCharacter::SetPrimary()
{
	IsPrimary = true;
	TheFlameThrower->SetWeapon(IsPrimary);
}

void APlayerCharacter::SetSecondary()
{
	IsPrimary = false;
	TheFlameThrower->SetWeapon(IsPrimary);
}

float APlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (PlayerHealth <= NoHealth)//if health is empty
	{

		IsDead = true;//sets target to dead
		UE_LOG(LogTemp, Warning, TEXT("dead"));
		if (IsPlayer == false)//if its ai
		{
			UE_LOG(LogTemp, Warning, TEXT("enemy"));
			Destroy();
			//GameModeRef->EnemyKilled();//executes a gamemode funtion
		}
		else//if player
		{
			//GameModeRef->GameOver();//ends the game
		}
	}
	else//if health isnt empty
	{
		PlayerHealth -= DamageAmount;//decreases health
		UE_LOG(LogTemp, Warning, TEXT("actor damaged"));
	}
	
	return 0.0f;
}
