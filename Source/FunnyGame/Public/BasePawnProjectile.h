// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TrebuchetActor.h"
#include "BasePawnProjectile.generated.h"


class UBaseProjectileSkillComponent;

UCLASS()
class FUNNYGAME_API ABasePawnProjectile : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawnProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UBaseProjectileSkillComponent* SkillComponent = nullptr;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, Category = "Components")
		USkeletalMeshComponent* ProjectileMesh;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, Category = "Components")
		ATrebuchetActor* TrebushetParent;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, Category = "Components")
		int32 ActorState = 0;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void ChangeOnActorState();

	void SetNextActorState();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
