// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

class UPhysicsHandleComponent;
class UPrimitiveComponent;
UCLASS()
class FUNNYGAME_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	APlayerPawn();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		bool IsCameraLock = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UPhysicsHandleComponent* HandleComponent;

protected:
	virtual void BeginPlay() override;

	void AddControllerYawInput(float Val);

	void AddControllerPitchInput(float Val);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tribushet")
	bool GrabMode = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tribushet")
	float Distance = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tribushet")
	UPrimitiveComponent* GrabbedComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tribushet")
		FName HitBoneName;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
