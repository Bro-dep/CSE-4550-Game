// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game4550Pawn.h"

#ifdef GAME4550_Game4550Pawn_generated_h
#error "Game4550Pawn.generated.h already included, missing '#pragma once' in Game4550Pawn.h"
#endif
#define GAME4550_Game4550Pawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGame4550Pawn ************************************************************
#define FID_Game4550_Source_Game4550_Game4550Pawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlippedCheck); \
	DECLARE_FUNCTION(execDoResetVehicle); \
	DECLARE_FUNCTION(execDoToggleCamera); \
	DECLARE_FUNCTION(execDoLookAround); \
	DECLARE_FUNCTION(execDoHandbrakeStop); \
	DECLARE_FUNCTION(execDoHandbrakeStart); \
	DECLARE_FUNCTION(execDoBrakeStop); \
	DECLARE_FUNCTION(execDoBrakeStart); \
	DECLARE_FUNCTION(execDoBrake); \
	DECLARE_FUNCTION(execDoThrottle); \
	DECLARE_FUNCTION(execDoSteering);


#define FID_Game4550_Source_Game4550_Game4550Pawn_h_25_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AGame4550Pawn_Statics;
GAME4550_API UClass* Z_Construct_UClass_AGame4550Pawn(ETypeConstructPhase);

#define FID_Game4550_Source_Game4550_Game4550Pawn_h_25_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AGame4550Pawn_Statics; \
	friend GAME4550_API UClass* ::Z_Construct_UClass_AGame4550Pawn(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AGame4550Pawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game4550"), Z_Construct_UClass_AGame4550Pawn) \
	DECLARE_SERIALIZER(AGame4550Pawn)


#define FID_Game4550_Source_Game4550_Game4550Pawn_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGame4550Pawn(AGame4550Pawn&&) = delete; \
	AGame4550Pawn(const AGame4550Pawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGame4550Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGame4550Pawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGame4550Pawn) \
	NO_API virtual ~AGame4550Pawn();


#define FID_Game4550_Source_Game4550_Game4550Pawn_h_22_PROLOG
#define FID_Game4550_Source_Game4550_Game4550Pawn_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game4550_Source_Game4550_Game4550Pawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game4550_Source_Game4550_Game4550Pawn_h_25_CALLBACK_WRAPPERS \
	FID_Game4550_Source_Game4550_Game4550Pawn_h_25_INCLASS_NO_PURE_DECLS \
	FID_Game4550_Source_Game4550_Game4550Pawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGame4550Pawn;

// ********** End Class AGame4550Pawn **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game4550_Source_Game4550_Game4550Pawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
