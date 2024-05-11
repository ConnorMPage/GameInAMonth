// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Grenade.generated.h"

UCLASS()
class GAMEINAMONTH_API AGrenade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrenade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* GrenadeMesh;//creates mesh component 
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CollisionBox;//creates collision box
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* GrenadeMovement;//creates the movment component
	
	UPROPERTY(VisibleAnywhere)
	URadialForceComponent* ForceComp;//creates force component 
	UPROPERTY(VisibleAnywhere)
	FTimerHandle GrenadeTimer;//creates timer

private:

	UPROPERTY(EditAnywhere)
	float GrenadeMovementSpeed = 800.0f;
	UPROPERTY(EditAnywhere)
	FVector BoxExtentSize = FVector(600.0f, 600.0f, 600.0f);//box size
	UPROPERTY(EditAnywhere)
	FVector BoxLocation = FVector(0.0f, 0.0f, 0.0f);//box location
	UPROPERTY(EditAnywhere)
	float lifeSpan = 20.0f;//lifespan
	UPROPERTY(EditAnywhere)
	float TimerLength = 2.0f;//length of timer
	UPROPERTY(EditAnywhere)
	bool InArea = false;//checks if in area
	UPROPERTY(EditAnywhere)
	float GrenadeDamage = 80.0f;//damage grenade does
	UPROPERTY()
	AActor* ActorToDamage;//the actor that'll be damaged


	//Functions
	UFUNCTION()
	void OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);//function for if overlap
	UFUNCTION()
	void OnOverLapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION()
	void GrenadeDetonate();
	UFUNCTION()
	void StartCountdown();


};
