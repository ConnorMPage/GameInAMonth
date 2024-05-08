// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/SecurityCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecurityCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_ASecurityCamera();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_ASecurityCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	void ASecurityCamera::StaticRegisterNativesASecurityCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecurityCamera);
	UClass* Z_Construct_UClass_ASecurityCamera_NoRegister()
	{
		return ASecurityCamera::StaticClass();
	}
	struct Z_Construct_UClass_ASecurityCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASecurityCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecurityCamera_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecurityCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SecurityCamera.h" },
		{ "ModuleRelativePath", "SecurityCamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASecurityCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecurityCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecurityCamera_Statics::ClassParams = {
		&ASecurityCamera::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecurityCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecurityCamera_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASecurityCamera()
	{
		if (!Z_Registration_Info_UClass_ASecurityCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecurityCamera.OuterSingleton, Z_Construct_UClass_ASecurityCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASecurityCamera.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<ASecurityCamera>()
	{
		return ASecurityCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASecurityCamera);
	ASecurityCamera::~ASecurityCamera() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SecurityCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SecurityCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASecurityCamera, ASecurityCamera::StaticClass, TEXT("ASecurityCamera"), &Z_Registration_Info_UClass_ASecurityCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecurityCamera), 3998522906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SecurityCamera_h_1861004255(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SecurityCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SecurityCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
