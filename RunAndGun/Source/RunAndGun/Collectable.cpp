// Thomas Arthur Simon

#include "Collectable.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"


// Sets default values
ACollectable::ACollectable()
{
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	RootComponent = CollisionComponent;
	CollisionComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACollectable::OnBeginOverlap);

	//Create a mesh component 
	CollectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectMesh"));

	Total = 0;
	Value = 1;
}

void ACollectable::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != this)
	{
		APlayerCharacter *P = Cast<APlayerCharacter>(OtherActor);
		if (P != NULL)
		{
			Destroy();
			P->Score += Value;

		}
	}
}
