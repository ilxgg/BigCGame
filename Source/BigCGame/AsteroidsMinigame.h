// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MinigameBase.h"
#include "AsteroidsMinigame.generated.h"

/**
 * 
 */
UCLASS()
class BIGCGAME_API UAsteroidsMinigame : public UMinigameBase
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	uint8 cellsToKill;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float spawnRate; //amount of cells spawned per second

private:

	uint8 cellsKilled;


protected:

	UFUNCTION(BlueprintCallable)
	virtual void startGame() override;
};
