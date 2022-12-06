// Fill out your copyright notice in the Description page of Project Settings.


#include "MinigameBase.h"

EInteractionType UMinigameBase::Interact()
{
	startGame();
	return EInteractionType::minigame;
}

void UMinigameBase::startGame()
{
	UE_LOG(LogTemp, Warning, TEXT("Default startGame Function from parent class"));
}
