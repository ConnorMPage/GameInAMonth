// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "SpawnPads.h"


void AMainGameMode::BeginPlay()
{
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnPads::StaticClass(), SpawnPoints);
	StartGame();
}

void AMainGameMode::EnemyKilled()
{
	EnemiesLeft--;//decreases alive enemys by 1
	if (EnemiesLeft <= 0)//if there are 0 alive
	{
		
		UE_LOG(LogTemp, Warning, TEXT("End Of Round"));
		GetWorld()->GetTimerManager().ClearTimer(GameTimer);
		
		if(RoundNum <= RoundsToWin)GetWorld()->GetTimerManager().SetTimer(BetweenRoundTimer, this, &AMainGameMode::StartRound, BetweenRoundLength, false);
		else
		{
			Won = true;
			GameOver();
		}
	}
}

void AMainGameMode::GameOver()
{
	InGame = false;
}

void AMainGameMode::StartGame()
{
	GetWorld()->GetTimerManager().SetTimer(BetweenRoundTimer, this, &AMainGameMode::StartRound, BetweenRoundLength, false);
	InGame = true;
}

void AMainGameMode::StartRound()
{
	UE_LOG(LogTemp, Warning, TEXT("NewRound"));
	RoundNum++;
	EnemiesLeft = FMath::RandRange(MinEnemies, MaxEnemies);

	for (int i = 0; i < EnemiesLeft; i++)
	{
		auto SpawnPoint = Cast<ASpawnPads>(ChooseSpawn());
		SpawnPoint->SpawnEnemies();
	}
	GetWorld()->GetTimerManager().SetTimer(GameTimer, this, &AMainGameMode::TimesUp, GameLength, false);
}

bool AMainGameMode::GetGameState()
{
	return InGame;
}

int AMainGameMode::GetWinCon()
{
	int WinCon;
	if (Won) WinCon = CWon;
	else if (OOT) WinCon = COutOfTime;
	else WinCon = CLoss;


	return WinCon;
}

void AMainGameMode::TimesUp()
{
	OOT = true;
	GameOver();
}

AActor* AMainGameMode::ChooseSpawn()
{
	int index = FMath::RandRange(0, SpawnPoints.Num() - 1);//randomly selects a number within array size
	return SpawnPoints[index];
}
