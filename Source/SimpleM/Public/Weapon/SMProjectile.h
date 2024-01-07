// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SMProjectile.generated.h"

class UMaterialInterface;
class UProjectileMovementComponent;
class UStaticMeshComponent;
class USceneComponent;
UCLASS()
class SIMPLEM_API ASMProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASMProjectile();
	void SetShootDirection(FVector Direction);
	UPROPERTY(VisibleAnywhere, Category="Components")
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, Category="Components")
	USceneComponent* SceneComponent;
	UPROPERTY(VisibleAnywhere, Category="Components")
	UMaterialInterface* Material;

	void InitMaterialParam();

	void ChangeMaterialParam();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	
	FTimerHandle TimerHandle;
	

	UPROPERTY(VisibleDefaultsOnly, Category="Weapon")
	UProjectileMovementComponent* MovementComponent;

public:
	FVector ShootDirection;

	float UpdateModifier = 0.5f;
	float UpdateDelay = 0.3f;
	float UpdateTime = 1.f;
	float Fade = 1.f;
	float MAXFade = -1.f;

	UPROPERTY()
	UMaterialInstanceDynamic* Dynamic;
};
