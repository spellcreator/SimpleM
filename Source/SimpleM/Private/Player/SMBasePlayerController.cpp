// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SMBasePlayerController.h"

#include "SMTargetSystem.h"
#include "GameFramework/PlayerInput.h"
#include "Engine/Engine.h"
#include "SMBaseCharacter.h"


void ASMBasePlayerController::YourFunctionToShowOrHideCursor(bool CurrentCursorState)
{
	// Тут оператор ! нужен чтоб работало корректно, когда каренткурсор стейт тру - шов курсор фалсе. Потом надо норм сделать
	bShowMouseCursor = !CurrentCursorState;
	bEnableClickEvents = CurrentCursorState; 
	bEnableMouseOverEvents = CurrentCursorState;
	//нужен чтоб блочить камеру, потом переделаю
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

// bool ASMBasePlayerController::GetTraceData(FVector& TraceStart, FVector& TraceEnd) 
// {
// 	float TraceMaxDistance = 999.f;
// 	FVector ViewLocation;
// 	FRotator ViewRotation;
// 	TraceStart = ViewLocation;
// 	const FVector ShootDirection = ViewRotation.Vector();
// 	TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;
// 	return true;
// }

bool ASMBasePlayerController::GetTraceData(FVector& TraceStart, FVector& TraceEnd) 
{
	FVector ViewLocation;
	FRotator ViewRotation;
	GetPlayerViewPoint(ViewLocation, ViewRotation);

	const float TraceMaxDistance = 999.f;
	TraceStart = ViewLocation;
	const FVector ShootDirection = ViewRotation.Vector();
	TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;
	return true;
}





void ASMBasePlayerController::MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd)
{
	if(!GetWorld()) return;
	
	FCollisionQueryParams CollisionParams;
	//CollisionParams.AddIgnoredActor(GetOwner());
	
	GetWorld()->LineTraceSingleByChannel(HitResult,TraceStart, TraceEnd, ECC_Visibility, CollisionParams);
}

FVector ASMBasePlayerController::GetCurrentMousePosition()
{
	float MouseX;
	float MouseY;
	GetMousePosition(MouseX, MouseY);
	const FVector MousePos = FVector(MouseX, MouseY,0);
	return MousePos;
}

void ASMBasePlayerController::OnClickStart()
{
	ShowCursor();
	FHitResult HitResult;
	FVector StartLocation, EndLocation;
	
	GetHitResultUnderCursor(ECC_Visibility, false, HitResult);
	// Получите текущую позицию мыши в мировых координатах
	DeprojectMousePositionToWorld(StartLocation, EndLocation);
	// TODO: Когда мы тыкаем в ебеня оно отправляет луч в 0 позицию, надо убрать эту хуйню.
	// Надо логику убрать в мейк хит и гет трейс дата
	AActor* Actor = HitResult.GetActor();
	if (Actor)
	{
		
		//актор нейм это имя актора хз откуда берется, а в акторнейм2 берется имя из иерархии
		FString ActorName = HitResult.GetActor()->GetName();
		FString ActorName2 = HitResult.GetActor()->GetActorLabel();
		if (Actor && ActorName2 == "SM_Cylinder")
		{
			//HitResult.GetActor()->Destroy();
		}
		DrawDebugLine(GetWorld(), StartLocation, HitResult.ImpactPoint, FColor::Red, false, 3.f, 0, 3.f);
		DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.f, 24, FColor::Red, false, 5.f);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Hero is: %s"), *ActorName2));
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("EndLoc: %s"), *EndLocation.ToString()));
		
		
		APawn* ControlledPawn = GetPawn();

		// Проверяем, является ли управляемый объект персонажем
		ASMBaseCharacter* ControlledCharacter = Cast<ASMBaseCharacter>(ControlledPawn);

		if (ControlledCharacter)
		{
			// Теперь у вас есть доступ к методам вашего персонажа
			ControlledCharacter->TargetSystem->SetSelectedTarget(Actor);
		}
	}
	else
	{
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, 3.f, 0, 3.f);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("No hero")));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("EndLoc: %s"), *EndLocation.ToString()));
	}
}

void ASMBasePlayerController::OnClickEnd()
{
	HideCursor();
}

