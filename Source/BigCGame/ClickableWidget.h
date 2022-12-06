// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Components/Button.h"
#include "InteractionInterface.h"
#include "ClickableWidget.generated.h"

/**
 * 
 */
UCLASS()
class BIGCGAME_API UClickableWidget : public UWidget, public IInteractionInterface
{
	GENERATED_BODY()

	UClickableWidget();
	
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UButton* Cell;

public:

	virtual EInteractionType Interact() override;


};
