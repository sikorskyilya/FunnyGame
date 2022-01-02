// Copyright Epic Games, Inc. All Rights Reserved.

#include "FunnyGameGameMode.h"
#include "FunnyGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFunnyGameGameMode::AFunnyGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
