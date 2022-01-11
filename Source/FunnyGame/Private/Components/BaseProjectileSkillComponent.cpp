// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/BaseProjectileSkillComponent.h"


UBaseProjectileSkillComponent::UBaseProjectileSkillComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UBaseProjectileSkillComponent::BeginPlay()
{
	Super::BeginPlay();	
}

void UBaseProjectileSkillComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

