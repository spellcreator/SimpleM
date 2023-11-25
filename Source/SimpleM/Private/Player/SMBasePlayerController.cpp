// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SMBasePlayerController.h"
#include "GameFramework/PlayerInput.h"
#include "Engine/Engine.h"


void ASMBasePlayerController::YourFunctionToShowOrHideCursor(bool bShouldShowCursor)
{
	//APlayerController* PC = Cast<APlayerController>(GetController());
	bShowMouseCursor = bShouldShowCursor;
	bEnableClickEvents = bShouldShowCursor; 
	bEnableMouseOverEvents = bShouldShowCursor;
	showcurs = bShouldShowCursor;


	int32 Width, Height;
	GetViewportSize(Width, Height);

	float ScreenCenterX = Width / 2.0f;
	float ScreenCenterY = Height / 2.0f;
	//SetIgnoreLookInput(true);
	if (GetMousePosition(reinterpret_cast<float&>(Width), reinterpret_cast<float&>(Height)))
	{
		SetMouseLocation(ScreenCenterX, ScreenCenterY);
	}
	//PC->GetMousePosition(reinterpret_cast<float&>(Width), reinterpret_cast<float&>(Height));

}
