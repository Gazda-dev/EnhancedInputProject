// Copyright Epic Games, Inc. All Rights Reserved.

#include "EnhancedInputProjectGameMode.h"
#include "EnhancedInputProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEnhancedInputProjectGameMode::AEnhancedInputProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
