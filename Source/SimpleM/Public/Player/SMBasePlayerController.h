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
	void YourFunctionToShowOrHideCursor(bool bShouldShowCursor);
	void SetTrue() {return YourFunctionToShowOrHideCursor(true);}
	void SetFalse() {return YourFunctionToShowOrHideCursor(false);}

	
	bool showcurs = false;
};
