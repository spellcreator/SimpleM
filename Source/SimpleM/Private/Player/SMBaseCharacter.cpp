// Minyan game


#include "SMBaseCharacter.h"
#include "InputMappingContext.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputState.h"
#include "SMBasePlayerController.h"
#include "MyInputConfigData.h"
#include "SMHealthComponent.h"
#include "SMTargetSystem.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include "WorldActors/SMSwingDoor.h"
#include "Components/SMCharacterMovementComponent.h"
#include "Components/SMWeaponComponent.h"
#include "Engine/GameViewportClient.h"

DEFINE_LOG_CATEGORY_STATIC(BaseCharLog, All, All);

void ASMBaseCharacter::OnOverlapBegin(UPrimitiveComponent* OverlapComponent,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
if ((OtherActor != nullptr)&& (OtherActor != this) && (OtherComp !=nullptr) && OtherActor->GetClass()->IsChildOf(ASMSwingDoor::StaticClass()))
{
	CurrentDoor = Cast<ASMSwingDoor>(OtherActor);
}
}

void ASMBaseCharacter::OnOverlapEnd(UPrimitiveComponent* OverlapComponent,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor != nullptr)&& (OtherActor != this) && (OtherComp !=nullptr)) 
	{
		CurrentDoor = nullptr;
	}
}

// Sets default values
ASMBaseCharacter::ASMBaseCharacter(const FObjectInitializer &Object)
	: Super(Object.SetDefaultSubobjectClass<USMCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Contoller = CreateDefaultSubobject<ASMBasePlayerController>("PlayerContorller");
// Компонент стойки
	
	// Сетапим стойку для камеры, закрепляем ее за рут компонентом и настраиваем под хотелки
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;
	SpringArmComponent->TargetArmLength = SpringArmTargetLength;
	//SpringArmComponent->SocketOffset = FVector(.0f,100.0f,.0f);

	WeaponComponent = CreateDefaultSubobject<USMWeaponComponent>("WeaponComponent");

	//
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bIgnoreBaseRotation = true;

	//
	TargetSystem = CreateDefaultSubobject<USMTargetSystem>("TargetSys");

// Камера компонент	
	//Сетапим камеру и прикручиваем к нашей стойке
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(SpringArmComponent);
	CameraComponent->bUsePawnControlRotation = false;
	
// Компонент капсулы	
	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>("Capsule trigger");
	TriggerCapsule->InitCapsuleSize(55.f,96.f);
	TriggerCapsule->SetCollisionProfileName("Trigger");
	TriggerCapsule->SetupAttachment(GetRootComponent());

	TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &ASMBaseCharacter::OnOverlapBegin);
	TriggerCapsule->OnComponentEndOverlap.AddDynamic(this,&ASMBaseCharacter::OnOverlapEnd);

// Компонент здоровья
	HealthComponent = CreateDefaultSubobject<USMHealthComponent>("Health Component");

	CurrentDoor = nullptr;

	//Получаем мув компонент чарактера
	CharacterMovementComponent = Cast<UCharacterMovementComponent>(ACharacter::GetMovementComponent());

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 550.f, 0.f);
	

	// Добавляем чтоб перс смотрел в сторону направления 
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;


	// Настройка дефолтных значений 
	WalkSpeed = 600.f;
	JumpVelocity = 500.f;
	
}

// Called when the game starts or when spawned
void ASMBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	// Делаем на старте скорость равную хотьбе
	PlayerSpeed = WalkSpeed;
	CharacterMovementComponent->MaxWalkSpeed = PlayerSpeed;
}



// Called every frame
void ASMBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//YourFunctionToShowOrHideCursor(true);
}



bool ASMBaseCharacter::IsRunning() const
{
	return WantsToRun && !GetVelocity().IsZero();
}

// Called to bind functionality to input
void ASMBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//получаем контроллер  
	//APlayerController* PC = Cast<APlayerController>(GetController());
	Contoller = Cast<ASMBasePlayerController>(Cast<APlayerController>(GetController()));
	
	
	//создаем сабсистему 
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(Contoller->GetLocalPlayer());
	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(InputMapping, 0);
	
	// Get the EnhancedInputComponent
	UEnhancedInputComponent* Pei = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	// Bind the actions
	// TODO: Перенести логику всех екшенов в компоненты (мувмент компонент и тд). а отсюда вызывать его как фаер.
	// Вместо зис указывать нужный нам компонент
	Pei->BindAction(InputActions->InputMove, ETriggerEvent::Triggered, this, &ASMBaseCharacter::Move);
	Pei->BindAction(InputActions->InputLook, ETriggerEvent::Triggered, this, &ASMBaseCharacter::Look);
	Pei->BindAction(InputActions->InputJump, ETriggerEvent::Started, this, &ASMBaseCharacter::Jump);
	Pei->BindAction(InputActions->InputSprint,ETriggerEvent::Triggered,this, &ASMBaseCharacter::BeginSprint);
	Pei->BindAction(InputActions->InputSprint,ETriggerEvent::Completed,this, &ASMBaseCharacter::EndSprint);
	Pei->BindAction(InputActions->InputOpenDoor,ETriggerEvent::Triggered,this, &ASMBaseCharacter::OpenDoorAction);
	//Pei->BindAction(InputActions->InputFire,ETriggerEvent::Started,WeaponComponent, &USMWeaponComponent::Fire);
	Pei->BindAction(InputActions->InputLookArmLength,ETriggerEvent::Triggered,this, &ASMBaseCharacter::SpringArmLength);
	
	Pei->BindAction(InputActions->InputFire,ETriggerEvent::Started,Contoller, &ASMBasePlayerController::OnClickStart);
	Pei->BindAction(InputActions->InputFire,ETriggerEvent::Completed,Contoller, &ASMBasePlayerController::OnClickEnd);
}

void ASMBaseCharacter::BeginSprint()
{
	if (!WantsToRun && GetVelocity().IsZero()) return;
	//В начале спринта меняем скорость игрока на спринтовую и передаем ее мувмент компоненту
	WantsToRun = true;
	PlayerSpeed = SprintSpeed;
	CharacterMovementComponent->MaxWalkSpeed = PlayerSpeed;
	//UE_LOG(BaseCharLog, Display, TEXT("Char speed: %f"), PlayerSpeed);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Char speed: %f"), PlayerSpeed));

}

void ASMBaseCharacter::EndSprint()
{
	WantsToRun = false;
	// Возвращаем скорость игрока к хотьбе и так же передаем ее мувмент компоненту.
	PlayerSpeed = WalkSpeed;
	CharacterMovementComponent->MaxWalkSpeed = PlayerSpeed;
	//(BaseCharLog, Display,TEXT("Char speed: %f"), PlayerSpeed);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Char speed: %f"), PlayerSpeed));

}

void ASMBaseCharacter::OpenDoorAction()
{
	if (CurrentDoor)
	{
		CurrentDoor->ToggleDoor();
	}
}

void ASMBaseCharacter::Jump()
{
	CharacterMovementComponent->JumpZVelocity = JumpVelocity;
	Super::Jump();
}


void ASMBaseCharacter::Move(const FInputActionValue& Value)
{
	if(!Controller) return;

	const FVector2d MoveValue = Value.Get<FVector2d>();
	//const FRotator MoveRotation(0, Controller->GetControlRotation().Yaw, 0);

	const FRotator Rotator = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotator.Yaw, 0);

	const FVector DirectionForward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector DirectionRight = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	
	if (MoveValue.Y != 0.f)
	{
		//const FVector Direction = MoveRotation.RotateVector(FVector::ForwardVector);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Char speed: %f"), MoveValue.Y));
		
		AddMovementInput(DirectionForward,MoveValue.Y);
	}

	if (MoveValue.X != 0.f)
	{
		//const FVector Direction = MoveRotation.RotateVector(FVector::RightVector);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Char speed: %f"), MoveValue.X));
		
		AddMovementInput(DirectionRight,MoveValue.X);
	}
}

void ASMBaseCharacter::Look(const FInputActionValue& Value)
{
	
	if(!Controller) return;
	//cделать гетер или убрать совсем эту хуйню
	if (Contoller->showcurs)
	{
		const FVector2D LookValue = Value.Get<FVector2D>();
		if (LookValue.X != 0.f)
		{
			AddControllerYawInput(LookValue.X);
		}
		if (LookValue.Y != 0.f)
		{
			AddControllerPitchInput(LookValue.Y);
		}
	}

}

void ASMBaseCharacter::SpringArmLength(const FInputActionValue& Value)
{
	if(!Controller) return;
	
	const float LookValue = Value.Get<float>();
	const float CurrentSpringArmLength = SpringArmComponent->TargetArmLength;
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Legth: %f"), CurrnetLegth));
	
	if (LookValue >= 0 && CurrentSpringArmLength < MaxArmSpringLength)
	{
		SpringArmComponent->TargetArmLength += LookValue * DistancingSpeed;
	}
	else if (LookValue <= 0 && CurrentSpringArmLength > MinArmSpringLength)
	{
		SpringArmComponent->TargetArmLength += LookValue * DistancingSpeed;
	}
}


