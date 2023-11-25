// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SMSwingDoor.generated.h"

class UBoxComponent;

UCLASS()
class SIMPLEM_API ASMSwingDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASMSwingDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Tick(float DeltaTime);

public:


	UPROPERTY(VisibleAnywhere, Category= MyComponents)
	UStaticMeshComponent* Door;

	UPROPERTY(VisibleAnywhere, Category= MyComponents)
	UBoxComponent* BoxComponent;
	bool IsNeedClose;
	void ToggleDoor();

private:
	UPROPERTY(VisibleAnywhere, Category=MyComponents)
	FVector BoxCollision;

	FTimerHandle TimerHandle;
	
	bool IsDoorClosed;

	float CurrentRotation;
	float DoorOpenRotating = 90.f;
	float DoorCloseRotating = 0.f;
	float RotationSpeed = 10.0f;
	float MaxDegree = 3.f;
	float AddRotation = 0.f;
	float DoorAutoCloseDelay = 25.f;
	float RotatingSpeedUp = 100;

	void DoorOpened();
	void DoorClosed();


};
