// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldActors/SMSwingDoor.h"
#include "DrawDebugHelpers.h"
#include "SMBaseCharacter.h"
#include "Components/BoxComponent.h"


// Sets default values
ASMSwingDoor::ASMSwingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->InitBoxExtent(BoxCollision);
	BoxComponent->SetCollisionProfileName("Trigger");
	//RootComponent = BoxComponent;

	Door = CreateDefaultSubobject<UStaticMeshComponent>("Door");
	Door->SetupAttachment(BoxComponent);


	IsDoorClosed = true;
	IsNeedClose = false;
    
	
}

// Called when the game starts or when spawned
void ASMSwingDoor::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugBox(GetWorld(), GetActorLocation(), BoxComponent->GetScaledBoxExtent(),FQuat(GetActorRotation()),FColor::Turquoise,true, -1, 0, 2);
	
	
}

// Called every frame
void ASMSwingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ASMSwingDoor::ToggleDoor()
{
	if (IsDoorClosed)
	{
		DoorOpened();
	}
	else
	{
		DoorClosed();
	}
}

void ASMSwingDoor::DoorOpened()
{
	CurrentRotation = Door->GetRelativeRotation().Yaw;
	const auto DoorR = Door->GetRelativeRotation();
	const FRotator NewR = FRotator(0.f, DoorOpenRotating, 0.f);
	Door->SetRelativeRotation(FMath::Lerp(FQuat(DoorR),FQuat(NewR), 0.03 * RotatingSpeedUp * GetWorld()->GetDeltaSeconds()));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("DoorCR: %hhd"), IsNeedClose));
	IsNeedClose = true;
	
	if (IsNeedClose)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ASMSwingDoor::DoorClosed, 0.01f, true, DoorAutoCloseDelay);
	}
	
	if (FMath::IsNearlyEqual(CurrentRotation,DoorOpenRotating, 1.5f))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("DoorCR: %f"), CurrentRotation));
		IsDoorClosed = false;
	}
	
}

void ASMSwingDoor::DoorClosed()
{
	CurrentRotation = Door->GetRelativeRotation().Yaw;
	
	const auto DoorR = Door->GetRelativeRotation();
	const FRotator NewR = FRotator(0.f, DoorCloseRotating, 0.f);
	Door->SetRelativeRotation(FMath::Lerp(FQuat(DoorR),FQuat(NewR), 0.03 * RotatingSpeedUp * GetWorld()->GetDeltaSeconds()));
	
	if (FMath::IsNearlyEqual(CurrentRotation,DoorCloseRotating, 1.5f))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("DoorCR: %f"), CurrentRotation));
		IsDoorClosed = true;
		IsNeedClose = false;
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}