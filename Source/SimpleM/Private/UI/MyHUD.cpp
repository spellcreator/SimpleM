// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MyHUD.h"
#include "Engine/Canvas.h"
#include "Blueprint/UserWidget.h"

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerHudWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHudWidgetClass);
	if (PlayerHudWidget)
	{
		PlayerHudWidget->AddToViewport();
	}
}
