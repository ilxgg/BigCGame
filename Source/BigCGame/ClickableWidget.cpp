// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickableWidget.h"

UClickableWidget::UClickableWidget()
{
}

EInteractionType UClickableWidget::Interact()
{
	return EInteractionType::objective;
}
