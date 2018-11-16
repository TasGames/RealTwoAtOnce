// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OutOfBounds.generated.h"

UCLASS()
class RUNANDGUN_API AOutOfBounds : public AActor
{
	GENERATED_BODY()

	//Trigger Component
	UPROPERTY(EditAnywhere)
	class UBoxComponent* CollisionComponent;
	
protected:

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere)
	float Damage;

public:	

	AOutOfBounds();
	
};
