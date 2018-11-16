// Thomas Arthur Simon

#include "EndGoal.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"

// Sets default values
AEndGoal::AEndGoal()
{
	GoalBox = CreateDefaultSubobject<UBoxComponent>(TEXT("VictoryBox"));
	RootComponent = GoalBox;
	GoalBox->InitBoxExtent(FVector(150, 100, 100));
	GoalBox->SetCollisionProfileName("Trigger");
	GoalBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	GoalBox->OnComponentBeginOverlap.AddDynamic(this, &AEndGoal::OnBeginOverlap);
}

void AEndGoal::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != this)
	{
		APlayerCharacter *P = Cast<APlayerCharacter>(OtherActor);
		if (P != NULL)
		{
			Win();
		}
	}
}

void AEndGoal::Win_Implementation()
{
}

