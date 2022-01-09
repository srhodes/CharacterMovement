// Copyright Epic Games, Inc. All Rights Reserved.

#include "CplusplusCharMoveGameMode.h"
#include "CplusplusCharMoveCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACplusplusCharMoveGameMode::ACplusplusCharMoveGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
