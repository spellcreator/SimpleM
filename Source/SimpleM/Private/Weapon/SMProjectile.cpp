// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/SMProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Materials/MaterialParameterCollectionInstance.h"

// Sets default values
ASMProjectile::ASMProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComp");
	RootComponent = SceneComponent;
	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjMovement");

	
	
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	WeaponMesh->SetupAttachment(SceneComponent);

}


void ASMProjectile::SetShootDirection(FVector Direction)
{
	ShootDirection = Direction;
}

void ASMProjectile::InitMaterialParam()
{
	Fade = FMath::Min(Fade - UpdateModifier, MAXFade);
	if (Fade == MAXFade && GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}

void ASMProjectile::ChangeMaterialParam()
{
	Material = WeaponMesh->GetMaterial(0);

	Dynamic = UMaterialInstanceDynamic::Create(Material,this);
	if (Dynamic)
	{
		WeaponMesh->SetMaterial(0,Dynamic);
		Dynamic->SetScalarParameterValue(TEXT("Fade"),Fade);
	}
}


// Called when the game starts or when spawned
void ASMProjectile::BeginPlay()
{
	Super::BeginPlay();
	check(MovementComponent)
	MovementComponent->InitialSpeed = 1000.f;
	MovementComponent->ProjectileGravityScale = 0.f;
	MovementComponent->Velocity = ShootDirection * MovementComponent->InitialSpeed;
	WeaponMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

	ChangeMaterialParam();
	
}

void ASMProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//проверить работает ли мин, я забыл про него
	//Fade = FMath::Min(Fade - UpdateModifier * DeltaTime, MAXFade);
	Fade -= UpdateModifier * DeltaTime;
	Dynamic->SetScalarParameterValue(TEXT("Fade"),Fade);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Char speed: %f"), Fade));

	
	// Creating a FHitResult to store the hit result
	FHitResult HitResult;

	// Start location for the sweep test.
	FVector StartLocation = GetActorLocation();

	// End location for the sweep test. 
	FVector EndLocation = GetActorLocation() + ShootDirection * DeltaTime;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);
	// Perform the sweep test
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECC_Visibility,
		CollisionParams
	);
	if (bHit && HitResult.bBlockingHit)
	{
		// if bBlockingHit is true, the projectile needs to be destroyed
		Destroy();
	}
}