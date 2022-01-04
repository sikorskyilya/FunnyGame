// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("HandleComponent"));
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerPawn::AddControllerYawInput(float Val)
{
	if (Val != 0.f && Controller && Controller->IsLocalPlayerController() && !IsCameraLock)
	{
		APlayerController* const PC = CastChecked<APlayerController>(Controller);
		PC->AddYawInput(Val);
	}
}

void APlayerPawn::AddControllerPitchInput(float Val)
{
	if (Val != 0.f && Controller && Controller->IsLocalPlayerController() && !IsCameraLock)
	{
		APlayerController* const PC = CastChecked<APlayerController>(Controller);
		PC->AddPitchInput(Val);
	}
}

void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("Turn", this, &APlayerPawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerPawn::AddControllerPitchInput);

	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

