// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/SMProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ASMProjectile::ASMProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponents");
	CollisionComponent->InitSphereRadius(5.f);
	CollisionComponent->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore); // Added this line
	SetRootComponent(CollisionComponent);
	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjMovement");
}

void ASMProjectile::SetShootDirection(FVector Direction)
{
	ShootDirection = Direction;


	FHitResult HitResult;

	// Start location for the sweep test.
	FVector StartLocation = GetActorLocation();

	// End location for the sweep test. 
	FVector EndLocation = GetActorLocation() + (ShootDirection);
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
// Called when the game starts or when spawned
void ASMProjectile::BeginPlay()
{
	Super::BeginPlay();
	check(MovementComponent)
	MovementComponent->InitialSpeed = 1000.f;
	MovementComponent->ProjectileGravityScale = 0.f;
	MovementComponent->Velocity = ShootDirection * MovementComponent->InitialSpeed;
}

void ASMProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Creating a FHitResult to store the hit result
	FHitResult HitResult;

	// Start location for the sweep test.
	FVector StartLocation = GetActorLocation();

	// End location for the sweep test. 
	FVector EndLocation = GetActorLocation() + (ShootDirection * DeltaTime);
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