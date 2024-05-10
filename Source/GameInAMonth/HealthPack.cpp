// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPack.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
// Sets default values
AHealthPack::AHealthPack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HealthPackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Health Pack Mesh"));//creates mesh
	SetRootComponent(HealthPackMesh);//sets mesh as root
	HealthPackMesh->SetNotifyRigidBodyCollision(true);
}


// Called when the game starts or when spawned
void AHealthPack::BeginPlay()
{
	Super::BeginPlay();
	OnActorHit.AddDynamic(this, &AHealthPack::OnHit);
}

// Called every frame
void AHealthPack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealthPack::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	auto player = Cast<APlayerCharacter>(OtherActor);
	player->AddHealth();
	Destroy();
}

