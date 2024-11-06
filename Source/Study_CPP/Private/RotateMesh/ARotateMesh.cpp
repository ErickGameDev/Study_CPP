// Fill out your copyright notice in the Description page of Project Settings.

#include "RotateMesh/ARotateMesh.h"

// Sets default values
AARotateMesh::AARotateMesh()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RotateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotateMesh"));
	RootComponent = RotateMesh;
}

// Called when the game starts or when spawned
void AARotateMesh::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AARotateMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotateMesh->AddWorldRotation(FRotator(0, DeltaTime * YawRotateValue, 0));
	RotateMesh->AddLocalRotation(FRotator(DeltaTime * PitchRotateValue, 0, 0));
}