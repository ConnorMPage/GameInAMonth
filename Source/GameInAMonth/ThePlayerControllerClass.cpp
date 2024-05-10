// Fill out your copyright notice in the Description page of Project Settings.


#include "ThePlayerControllerClass.h"

void AThePlayerControllerClass::BeginPlay()
{
	Super::BeginPlay();

	CrosshairUI = CreateWidget(this, CrosshairClass);
	if (CrosshairUI != nullptr)CrosshairUI->AddToViewport();

	MiniMapUI = CreateWidget(this, MiniMapClass);
	if (MiniMapUI != nullptr)MiniMapUI->AddToViewport();

	HUDUI = CreateWidget(this, HUDClass);
	if (HUDUI != nullptr)HUDUI->AddToViewport();
}
