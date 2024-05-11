// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "NavigationSystem.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UBTTask_ShootCharacter.generated.h"

/**
 * 
 */
UCLASS()
class GAMEINAMONTH_API UUBTTask_ShootCharacter : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;//executes task
private:
	UPROPERTY(VisibleAnywhere)
	float WeaponDamage = 25.0f;//amount of damage for apply damage
	UPROPERTY(VisibleAnywhere)
	FVector AddHeightToTrace = FVector(0.0f, 50.0f, 0.0f);
};
