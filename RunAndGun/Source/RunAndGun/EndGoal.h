// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndGoal.generated.h"

UCLASS()
class RUNANDGUN_API AEndGoal : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = Box)
	class UBoxComponent* GoalBox;

protected:

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Sets default values for this actor's properties
	AEndGoal();

};
