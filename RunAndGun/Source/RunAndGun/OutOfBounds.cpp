// Thomas Arthur Simon

#include "OutOfBounds.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"

// Sets default values
AOutOfBounds::AOutOfBounds()
{
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	RootComponent = CollisionComponent;
	CollisionComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AOutOfBounds::OnBeginOverlap);
}

void AOutOfBounds::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != this)
	{
		APlayerCharacter *P = Cast<APlayerCharacter>(OtherActor);
		if (P != NULL)
		{
			P->SetActorLocation(SpawnLocation);
			P->Health -= Damage;
		}
	}
}
