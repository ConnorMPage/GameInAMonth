// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletBox.h"
#include "PlayerCharacter.h"

// Sets default values
ABulletBox::ABulletBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BulletBoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet Box Mesh"));//creates mesh
	SetRootComponent(BulletBoxMesh);//sets mesh as root
	BulletBoxMesh->SetNotifyRigidBodyCollision(true);
}

// Called when the game starts or when spawned
void ABulletBox::BeginPlay()
{
	Super::BeginPlay();
	OnActorHit.AddDynamic(this, &ABulletBox::OnHit);
}

// Called every frame
void ABulletBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABulletBox::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	auto player = Cast<APlayerCharacter>(OtherActor);
	player->AddBullets();
	Destroy();
}

