// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyCharacterAIController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEINAMONTH_API AEnemyCharacterAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere)
	UBehaviorTree* EnemyBehaviourTree;
	UPROPERTY()
	APawn* PlayerCharacterRef;
	UPROPERTY()
	TArray<AActor*> Waypoints;
private:
	UFUNCTION()
	bool CheckInFront(AActor* TargetActor);
	UFUNCTION()
	AActor* ChooseWaypoint();
};

