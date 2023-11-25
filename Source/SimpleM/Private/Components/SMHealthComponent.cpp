#include "SMHealthComponent.h"
#include "GameFramework/Actor.h"
//#include "DamageType/MFireDamageType.h"
//#include "DamageType/MFrostDamageType.h"
//#include "Dev/DevDamageActor.h"

DEFINE_LOG_CATEGORY_STATIC(BaseHealthCompLog, All, All);

// Sets default values for this component's properties
USMHealthComponent::USMHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.


	// ...
}


void USMHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	check(MaxHealth >0);
	Health = MaxHealth;

	

	AActor* ComponentOwner = GetOwner();
	if (ComponentOwner)
	{
		ComponentOwner->OnTakeAnyDamage.AddDynamic(this, &USMHealthComponent::TakeDamage);
	}
}

void USMHealthComponent::TakeDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType,
	AController* InstigatedBy, AActor* DamageCauser)
{

	if(Damage <=0) return;
	
	Damage = FMath::Min(Health, Damage);
	Health = FMath::Clamp(Health - Damage, 0.0f, MaxHealth);
	SetHealth(Health);

	if (DamageType)
	{
		//if (DamageType->IsA<UMFireDamageType>())
		//{
		//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("DaamgeType: Fire")));
		//	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Damage Causer %s"), *DamageCauser->GetName()));
		//}
		//else if (DamageType->IsA<UMFrostDamageType>())
		//{
		//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("DaamgeType: Frost")));
		//}
	}
	
	
}


void USMHealthComponent::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
										AController* InstigatedBy, AActor* DamageCauser)
{
	//Health -= Damage;
}