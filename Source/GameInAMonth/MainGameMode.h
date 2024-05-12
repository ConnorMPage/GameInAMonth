// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAMEINAMONTH_API AMainGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	void EnemyKilled();//if an enemy is killed

	UFUNCTION()
	void GameOver();//ends the game
	UFUNCTION()
	void StartGame();//
	UFUNCTION()
	void StartRound();
	UFUNCTION()
	bool GetGameState();
	UFUNCTION()
	int GetWinCon();

private:
	UFUNCTION()
	void TimesUp();//ends the game when out of time
	UFUNCTION()
	AActor* ChooseSpawn();
	UPROPERTY(EditAnywhere)
	float GameLength = 240.0f;//ten minute timer
	UPROPERTY(EditAnywhere)
	float EndGameLength = 3.0f;//wait for the game t start
	UPROPERTY(EditAnywhere)
	float BetweenRoundLength = 10.0f;
	
	FTimerHandle GameTimer;//game timer

	
	FTimerHandle BetweenRoundTimer;
	UPROPERTY(EditAnywhere)
	int MinEnemies = 2;
	UPROPERTY(EditAnywhere)
	int MaxEnemies = 10;
	UPROPERTY()
	int EnemiesLeft;
	UPROPERTY()
	int RoundNum = 0;
	UPROPERTY(EditAnywhere)
	int RoundsToWin = 5;
	UPROPERTY()
	TArray<AActor*> SpawnPoints;

	UPROPERTY()
	bool InGame = true;

	UPROPERTY()
	bool OOT = false;
	UPROPERTY()
	bool Won = false;

	UPROPERTY()
	int CWon = 1;
	UPROPERTY()
	int COutOfTime = 2;
	UPROPERTY()
	int CLoss = 3;
};
