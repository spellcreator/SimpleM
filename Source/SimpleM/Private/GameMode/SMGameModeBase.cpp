// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/SMGameModeBase.h"
#include "SMBaseCharacter.h"
#include "SMBasePlayerController.h"


ASMGameModeBase::ASMGameModeBase()
{
	// Делаем дефолтным классом нашего чарактера. Потом добавим контроллер и худ, ну и другие классы
	DefaultPawnClass = ASMBaseCharacter::StaticClass();
	PlayerControllerClass = ASMBasePlayerController::StaticClass();
	//PlayerControllerClass = AMBaseCharacter::StaticClass();
	//HUDClass = AMBaseCharacter::StaticClass();
}
