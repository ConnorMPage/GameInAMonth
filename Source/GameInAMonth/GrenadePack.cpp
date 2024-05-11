// Fill out your copyright notice in the Description page of Project Settings.


#include "GrenadePack.h"
#include "PlayerCharacter.h"

// Sets default values
AGrenadePack::AGrenadePack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GrenadePackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Grenade Pack Mesh"));//creates mesh
	SetRootComponent(GrenadePackMesh);//sets mesh as root
	GrenadePackMesh->SetNotifyRigidBodyCollision(true);
}

// Called when the game starts or when spawned
void AGrenadePack::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrenadePack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	OnActorHit.AddDynamic(this, &AGrenadePack::OnHit);
}

void AGrenadePack::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	auto player = Cast<APlayerCharacter>(OtherActor);
	player->AddGrenades();
	Destroy();
}

