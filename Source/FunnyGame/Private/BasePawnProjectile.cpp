// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawnProjectile.h"
#include "Components/BaseProjectileSkillComponent.h"
// Sets default values
ABasePawnProjectile::ABasePawnProjectile()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMesh = CreateDefaultSubobject<USkeletalMeshComponent>("ProjectileMesh");
	SetRootComponent(ProjectileMesh);


	SkillComponent = CreateDefaultSubobject<UBaseProjectileSkillComponent>("SkillComponent");
}

// Called when the game starts or when spawned
void ABasePawnProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePawnProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasePawnProjectile::SetNextActorState()
{
	ActorState++;
	ChangeOnActorState();
}

// Called to bind functionality to input
void ABasePawnProjectile::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("SetNextActorState", IE_Pressed, this, &ABasePawnProjectile::SetNextActorState);
}

