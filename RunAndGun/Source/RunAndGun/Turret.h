// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class RUNANDGUN_API ATurret : public AActor
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* TurretMesh;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AProjectile> ProjectileClass;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Fire();
	void ShotTimerExpired();

	UPROPERTY(EditAnywhere)
	float FireRate;

	UPROPERTY(EditAnywhere)
	FVector OffSet;

	bool CanFire;
	FTimerHandle TimerHandle_ShotTimerExpired;

public:

	ATurret();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
};
