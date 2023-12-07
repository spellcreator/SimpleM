// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SMBasePlayerController.h"
#include "GameFramework/PlayerInput.h"
#include "Engine/Engine.h"


void ASMBasePlayerController::YourFunctionToShowOrHideCursor(bool CurrentCursorState)
{
	bShowMouseCursor = !CurrentCursorState;
	bEnableClickEvents = CurrentCursorState; 
	bEnableMouseOverEvents = CurrentCursorState;
	showcurs = CurrentCursorState;
}

void ASMBasePlayerController::ShowCursor()
{
	YourFunctionToShowOrHideCursor(true);
	CurrentCursorPosition = GetCurrentMousePosition();
}

void ASMBasePlayerController::HideCursor()
{
	YourFunctionToShowOrHideCursor(false);
	SetMouseLocation(CurrentCursorPosition.X,CurrentCursorPosition.Y);
}

void ASMBasePlayerController::MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd)
{
	if(!GetWorld()) return;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(GetOwner());

	GetWorld()->LineTraceSingleByChannel(HitResult,TraceStart, TraceEnd, ECC_Visibility, CollisionParams);
}

FVector2D ASMBasePlayerController::GetCurrentMousePosition()
{
	float MouseX;
	float MouseY;
	GetMousePosition(MouseX, MouseY);
	return FVector2D(MouseX, MouseY); 
}

