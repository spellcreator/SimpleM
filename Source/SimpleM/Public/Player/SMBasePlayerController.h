// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SMBaseCharacter.h"
#include "GameFramework/PlayerController.h"
#include "SMBasePlayerController.generated.h"

class APlayerController;
class ASMBaseCharacter;
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
	//bool GetTraceData(FVector& TraceStart, FVector& TraceEnd);
	bool GetTraceData(FVector& TraceStart, FVector& TraceEnd);
	//bool GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation);
	
	UPROPERTY(VisibleAnywhere)
	ASMBaseCharacter* CustomCharacter;
	void MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd);
	FVector GetCurrentMousePosition();
	UFUNCTION(BlueprintCallable, Category= "PlayerMovement")
	void OnClickStart();
	UFUNCTION(BlueprintCallable, Category= "PlayerMovement")
	void OnClickEnd();

	bool showcurs = false;

private:
	void YourFunctionToShowOrHideCursor(bool CurrentCursorState);

	FVector CurrentCursorPosition;
};
