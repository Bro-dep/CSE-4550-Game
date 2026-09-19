// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_TimeTrial/TimeTrialGameMode.h"

#ifdef GAME4550_TimeTrialGameMode_generated_h
#error "TimeTrialGameMode.generated.h already included, missing '#pragma once' in TimeTrialGameMode.h"
#endif
#define GAME4550_TimeTrialGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATimeTrialGameMode *******************************************************
struct Z_Construct_UClass_ATimeTrialGameMode_Statics;
GAME4550_API UClass* Z_Construct_UClass_ATimeTrialGameMode(ETypeConstructPhase);

#define FID_Game4550_Source_Game4550_Variant_TimeTrial_TimeTrialGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ATimeTrialGameMode_Statics; \
	friend GAME4550_API UClass* ::Z_Construct_UClass_ATimeTrialGameMode(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ATimeTrialGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game4550"), Z_Construct_UClass_ATimeTrialGameMode) \
	DECLARE_SERIALIZER(ATimeTrialGameMode)


#define FID_Game4550_Source_Game4550_Variant_TimeTrial_TimeTrialGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimeTrialGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATimeTrialGameMode(ATimeTrialGameMode&&) = delete; \
	ATimeTrialGameMode(const ATimeTrialGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeTrialGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeTrialGameMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimeTrialGameMode) \
	NO_API virtual ~ATimeTrialGameMode();


#define FID_Game4550_Source_Game4550_Variant_TimeTrial_TimeTrialGameMode_h_14_PROLOG
#define FID_Game4550_Source_Game4550_Variant_TimeTrial_TimeTrialGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game4550_Source_Game4550_Variant_TimeTrial_TimeTrialGameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Game4550_Source_Game4550_Variant_TimeTrial_TimeTrialGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATimeTrialGameMode;

// ********** End Class ATimeTrialGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game4550_Source_Game4550_Variant_TimeTrial_TimeTrialGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
