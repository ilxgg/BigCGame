// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionInterface.generated.h"

UENUM()
enum EInteractionType
{
	null, //default return type means nothign when pressed
	minigame, //returns when object interacted with is a minigame
	objective //returns when object interacted with is an objective within the minigame
};
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BIGCGAME_API IInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual EInteractionType Interact();
};
