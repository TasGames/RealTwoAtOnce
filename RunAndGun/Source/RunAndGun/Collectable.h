// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Collectable.generated.h"

UCLASS()
class RUNANDGUN_API ACollectable : public AActor
{
	GENERATED_BODY()

	//Trigger Component
	UPROPERTY(EditAnywhere)
	class UBoxComponent* CollisionComponent;

	//Collectable Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* CollectMesh;

protected:

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Value;

	int Total;

public:	
	// Sets default values for this actor's properties
	ACollectable();

};
