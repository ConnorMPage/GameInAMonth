// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "ThePlayerControllerClass.generated.h"

/**
 * 
 */
UCLASS()
class GAMEINAMONTH_API AThePlayerControllerClass : public APlayerController
{
	GENERATED_BODY()
	
public:

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> CrosshairClass;
	UPROPERTY()
	UUserWidget* CrosshairUI;
};
