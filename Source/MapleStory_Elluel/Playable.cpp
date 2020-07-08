// Fill out your copyright notice in the Description page of Project Settings.

#include "Playable.h"
#include "Engine/World.h"

// Sets default values
APlayable::APlayable()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayable::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlayable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayable::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

FHitResult APlayable::instantShot()
{
	FVector rayLocation;
	FRotator rayRotation;
	FVector endTrace = FVector::ZeroVector;

	APlayerController *const playerController = GetWorld()->GetFirstPlayerController();
	if (playerController)
	{
		playerController->GetPlayerViewPoint(rayLocation, rayRotation);
	}

	return APlayable;
}
