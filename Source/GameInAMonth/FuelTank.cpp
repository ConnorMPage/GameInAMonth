// Fill out your copyright notice in the Description page of Project Settings.


#include "FuelTank.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
// Sets default values
AFuelTank::AFuelTank()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TankMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Fuel Tank Mesh"));//creates mesh
	SetRootComponent(TankMesh);//sets mesh as root
	TankMesh->SetNotifyRigidBodyCollision(true);
}

// Called when the game starts or when spawned
void AFuelTank::BeginPlay()
{
	Super::BeginPlay();
	OnActorHit.AddDynamic(this, &AFuelTank::OnHit);
}

// Called every frame
void AFuelTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFuelTank::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	auto player = Cast<APlayerCharacter>(OtherActor);
	player->RefuelWeapon();
	Destroy();
}

