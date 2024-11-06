// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AProjectileBase.generated.h"

UCLASS()
class STUDY_CPP_API AAProjectileBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAProjectileBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere)
	class UProjectileMovementComponent* ProjectileComponent;

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
