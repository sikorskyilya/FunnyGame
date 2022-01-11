// Fill out your copyright notice in the Description page of Project Settings.


#include "Skills/BaseSkill.h"

ABaseSkill::ABaseSkill()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ABaseSkill::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseSkill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

