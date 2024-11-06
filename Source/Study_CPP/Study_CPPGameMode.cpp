// Copyright Epic Games, Inc. All Rights Reserved.

#include "Study_CPPGameMode.h"
#include "Study_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStudy_CPPGameMode::AStudy_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
