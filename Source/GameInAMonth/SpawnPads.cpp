// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnPads.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
// Sets default values
ASpawnPads::ASpawnPads()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpawnPadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Spawn Pad Mesh"));//creates mesh
	SetRootComponent(SpawnPadMesh);
}

// Called when the game starts or when spawned
void ASpawnPads::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnPads::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnPads::SpawnEnemies()
{
	FVector pos = SpawnPadMesh->GetComponentLocation();
	APlayerCharacter* tempEnemy = GetWorld()->SpawnActor<APlayerCharacter>(EnemyClass);
	tempEnemy->SetActorLocation(pos);
}

