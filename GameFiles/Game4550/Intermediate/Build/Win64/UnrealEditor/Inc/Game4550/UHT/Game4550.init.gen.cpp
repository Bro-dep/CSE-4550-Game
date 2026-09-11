// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame4550_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	GAME4550_API UFunction* Z_Construct_UDelegateFunction_Game4550_CountdownFinishedDelegate__DelegateSignature(ETypeConstructPhase);
	GAME4550_API UFunction* Z_Construct_UDelegateFunction_Game4550_StartRaceDelegate__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Game4550;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Game4550(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_Game4550.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Game4550_CountdownFinishedDelegate__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Game4550_StartRaceDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Game4550",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xF164A17A,
			0x80F6BDAB,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Game4550.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Game4550.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Game4550(Z_Construct_UPackage__Script_Game4550, TEXT("/Script/Game4550"), Z_Registration_Info_UPackage__Script_Game4550, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF164A17A, 0x80F6BDAB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
