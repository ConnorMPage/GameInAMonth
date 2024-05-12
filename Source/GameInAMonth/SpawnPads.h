// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPads.generated.h"
class APlayerCharacter;
UCLASS()
class GAMEINAMONTH_API ASpawnPads : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnPads();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION()
	void SpawnEnemies();
protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* SpawnPadMesh;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<APlayerCharacter> EnemyClass;


};
