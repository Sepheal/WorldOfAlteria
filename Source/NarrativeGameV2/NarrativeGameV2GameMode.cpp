// Copyright Epic Games, Inc. All Rights Reserved.

#include "NarrativeGameV2GameMode.h"
#include "NarrativeGameV2Character.h"
#include "UObject/ConstructorHelpers.h"

ANarrativeGameV2GameMode::ANarrativeGameV2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
