// Copyright Epic Games, Inc. All Rights Reserved.

#include "My333GameMode.h"
#include "My333Character.h"
#include "UObject/ConstructorHelpers.h"

AMy333GameMode::AMy333GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
