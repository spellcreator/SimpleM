// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/SMProjectile.h"
#include "Components/SphereComponent.h"

// Sets default values
ASMProjectile::ASMProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponents");
	CollisionComponent->InitSphereRadius(5.f);
	SetRootComponent(CollisionComponent);
}

// Called when the game starts or when spawned
void ASMProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}



