// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryManCppGameMode.h"
#include "BatteryManCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABatteryManCppGameMode::ABatteryManCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
