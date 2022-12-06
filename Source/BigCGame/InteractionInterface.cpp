// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionInterface.h"

// Add default functionality here for any IInteractionInterface functions that are not pure virtual.

EInteractionType IInteractionInterface::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Default Interface Function, Class hasnt overridden function"));
	return EInteractionType::null;
}
