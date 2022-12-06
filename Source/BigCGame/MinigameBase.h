// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractionInterface.h"
#include "MinigameBase.generated.h"

/**
 * 
 */
UCLASS()
class BIGCGAME_API UMinigameBase : public UUserWidget, public IInteractionInterface
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	virtual EInteractionType Interact() override;

protected:
	virtual void startGame();
};
