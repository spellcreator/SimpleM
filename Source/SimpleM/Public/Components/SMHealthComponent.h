// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SMHealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMPLEM_API USMHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	USMHealthComponent();

	UFUNCTION(BlueprintCallable, Category= "Health")
	float GetHealthPercent() const {return Health / MaxHealth;}

	float GetHealth() const {return Health;}
	void SetHealth(const float HealthValue) {Health = HealthValue;}

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float MaxHealth = 100.0f;

	UFUNCTION()
	void TakeDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

private:
	float Health = 0;

	UFUNCTION()
	void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
	
		
};
