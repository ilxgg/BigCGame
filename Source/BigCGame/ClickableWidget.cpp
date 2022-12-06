// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickableWidget.h"

UClickableWidget::UClickableWidget()
{
	FScriptDelegate Delegate;
	Delegate.BindUFunction(this, "Interact");
	Cell->OnPressed.Add(Delegate);
}

EInteractionType UClickableWidget::Interact()
{
	return EInteractionType::objective;
}
