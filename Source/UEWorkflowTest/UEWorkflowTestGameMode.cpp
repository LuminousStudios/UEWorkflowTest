// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEWorkflowTestGameMode.h"
#include "UEWorkflowTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEWorkflowTestGameMode::AUEWorkflowTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
