// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/SercurityCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSercurityCameraManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_ASercurityCameraManager();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_ASercurityCameraManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	void ASercurityCameraManager::StaticRegisterNativesASercurityCameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASercurityCameraManager);
	UClass* Z_Construct_UClass_ASercurityCameraManager_NoRegister()
	{
		return ASercurityCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ASercurityCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASercurityCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASercurityCameraManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASercurityCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SercurityCameraManager.h" },
		{ "ModuleRelativePath", "SercurityCameraManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASercurityCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASercurityCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASercurityCameraManager_Statics::ClassParams = {
		&ASercurityCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASercurityCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASercurityCameraManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASercurityCameraManager()
	{
		if (!Z_Registration_Info_UClass_ASercurityCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASercurityCameraManager.OuterSingleton, Z_Construct_UClass_ASercurityCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASercurityCameraManager.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<ASercurityCameraManager>()
	{
		return ASercurityCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASercurityCameraManager);
	ASercurityCameraManager::~ASercurityCameraManager() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SercurityCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SercurityCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASercurityCameraManager, ASercurityCameraManager::StaticClass, TEXT("ASercurityCameraManager"), &Z_Registration_Info_UClass_ASercurityCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASercurityCameraManager), 3711826239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SercurityCameraManager_h_124214785(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SercurityCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SercurityCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
