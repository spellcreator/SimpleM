// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SMBaseCharacter.generated.h"

struct FInputActionValue;
class UCameraComponent;
class USpringArmComponent;
class UMyInputConfigData;
class UInputMappingContext;
class UCharacterMovementComponent;
class UCapsuleComponent;
class USMHealthComponent;
class ASMSwingDoor;
class USMWeaponComponent;
class ASMBasePlayerController;
class USMTargetSystem;
class UStaticMeshComponent;
class UStaticMesh;
class UMaterial;
UCLASS()
class SIMPLEM_API ASMBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	ASMBasePlayerController* MyController;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character")
	UStaticMeshComponent* GridMeshComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character")
	UStaticMesh* TargetMesh;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character")
	UMaterial* TargetMaterial;
	
	
	UFUNCTION(BlueprintCallable, Category= "PlayerMovement")
	bool IsRunning() const;

	UPROPERTY(VisibleAnywhere, Category="Target")
	USMTargetSystem* TargetSystem;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	USpringArmComponent* SpringArmComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	USMHealthComponent* HealthComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	ASMSwingDoor* CurrentDoor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	USMWeaponComponent* WeaponComponent;
	

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlapComponent,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UPROPERTY(VisibleAnywhere, Category= "Trigger")
	UCapsuleComponent* TriggerCapsule;
	// Sets default values for this character's properties
	ASMBaseCharacter(const FObjectInitializer &Object);
	void SetTargetMat();
	void SetTargetMatN();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

	

	


#pragma region Input

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	UInputMappingContext* InputMapping = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category= "Enchanced Input")
	UMyInputConfigData* InputActions = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
	UCharacterMovementComponent* CharacterMovementComponent;

	void BeginSprint();
	void EndSprint();
	
	void OpenDoorAction();

	virtual void Jump() override;

private:

	float StartArmLenght; 
	// Handle move input 
	void Move(const FInputActionValue& Value);
 
	// Handle look input
	void Look(const FInputActionValue& Value);
	void SpringArmLength(const FInputActionValue& Value);

	

	
public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma endregion Input

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	UPROPERTY(EditDefaultsOnly, Category= "PlayerMovement")
	float SprintSpeed = 1000.0f;
	UPROPERTY(EditDefaultsOnly, Category= "PlayerMovement")
	float WalkSpeed;
	UPROPERTY(EditDefaultsOnly, Category= "PlayerMovement")
	float PlayerSpeed;
	UPROPERTY(EditDefaultsOnly, Category= "PlayerMovement")
	float JumpVelocity;
	UPROPERTY(EditDefaultsOnly, Category= "PlayerMovement")
	bool WantsToRun = false;
	
	const float MaxArmSpringLength = 2500.f;
	const float MinArmSpringLength = 0.f;
	const float DistancingSpeed = 100.f;
	
	
	UPROPERTY(EditDefaultsOnly, Category= "Camera", meta=(ClampMin ="0", ClampMax = "2500"))
	float SpringArmTargetLength = 800.0f;

	

	
};
