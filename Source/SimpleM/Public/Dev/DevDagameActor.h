// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DevDagameActor.generated.h"

UCLASS()
class SIMPLEM_API ADevDagameActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADevDagameActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* SceneComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Radius = 300.f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Damage = 1.f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool DoFullDamage = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FColor SphereColor =  FColor::Red;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UDamageType> DamageType;

private:

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
