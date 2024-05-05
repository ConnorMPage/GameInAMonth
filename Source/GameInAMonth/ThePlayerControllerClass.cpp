// Fill out your copyright notice in the Description page of Project Settings.


#include "ThePlayerControllerClass.h"

void AThePlayerControllerClass::BeginPlay()
{
	Super::BeginPlay();

	CrosshairUI = CreateWidget(this, CrosshairClass);
	if (CrosshairUI != nullptr)CrosshairUI->AddToViewport();

}
