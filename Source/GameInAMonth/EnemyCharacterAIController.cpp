// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"

void AEnemyCharacterAIController::BeginPlay()
{
	Super::BeginPlay();

	if (EnemyBehaviourTree != nullptr)//checks if the tree is nullptr
	{
		RunBehaviorTree(EnemyBehaviourTree);//runs behaviour tree
	}

	PlayerCharacterRef = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
}

void AEnemyCharacterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (LineOfSightTo(PlayerCharacterRef) && CheckInFront(PlayerCharacterRef))//if the player is in front
	{
		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerCharacterRef->GetActorLocation());//sets the player location
	}
	else GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));//clears the value so they go between waypoints instead
}

bool AEnemyCharacterAIController::CheckInFront(AActor* TargetActor)
{
	bool result = false;
	AActor* AIPawn = GetPawn();//gets ai pawn
	FVector AIForwardVector = AIPawn->GetActorForwardVector();//finds forward vector
	FVector PlayerPositionVector = TargetActor->GetActorLocation();//gets player location
	FVector AIPositionVector = AIPawn->GetActorLocation();//gets actor location
	FVector AIToPlayerVector = PlayerPositionVector - AIPositionVector;//checks distance between th etwo
	AIToPlayerVector.Normalize();//normalises it
	float DirectionDotProduct = FVector::DotProduct(AIToPlayerVector, AIForwardVector);//complets th edot product
	if (DirectionDotProduct > 0)result = true;//facing player true
	else result = false;//facing player false
	
	return result;
}

AActor* AEnemyCharacterAIController::ChooseWaypoint()
{
	int index = FMath::RandRange(0, Waypoints.Num() - 1);//randomly selects a number within array size
	return Waypoints[index];
}
