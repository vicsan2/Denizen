// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abl/BaseAbilityActor.h"
#include "BaseProjectile.generated.h"

UCLASS()
class GAMEREAL_API ABaseProjectile : public ABaseAbilityActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		class USphereComponent* CollisionSphere;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		class UProjectileMovementComponent* ProjectileMovementComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Fire();

private:


};
