// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SMBasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEM_API ASMBasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void ShowCursor();
	void HideCursor();
	void MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd);
	FVector2D GetCurrentMousePosition();

	bool showcurs = false;

private:
	void YourFunctionToShowOrHideCursor(bool CurrentCursorState);

	FVector2d CurrentCursorPosition;
};
