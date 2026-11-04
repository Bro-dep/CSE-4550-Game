// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game4550WheelFront.h"
#include "UObject/ConstructorHelpers.h"

UGame4550WheelFront::UGame4550WheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}