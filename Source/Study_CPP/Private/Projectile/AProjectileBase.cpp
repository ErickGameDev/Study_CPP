// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile/AProjectileBase.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AAProjectileBase::AAProjectileBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	RootComponent = ProjectileMesh;

	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));

	ProjectileComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComponent"));
	ProjectileComponent->InitialSpeed = 1500.f;
	ProjectileComponent->MaxSpeed = 1800.f;
}

// Called when the game starts or when spawned
void AAProjectileBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}