// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/FlameThrower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlameThrower() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AFlameThrower();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AFlameThrower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	void AFlameThrower::StaticRegisterNativesAFlameThrower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlameThrower);
	UClass* Z_Construct_UClass_AFlameThrower_NoRegister()
	{
		return AFlameThrower::StaticClass();
	}
	struct Z_Construct_UClass_AFlameThrower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlameThrowerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameThrowerMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlameThrower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlameThrower.h" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh = { "FlameThrowerMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, FlameThrowerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlameThrower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlameThrower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlameThrower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlameThrower_Statics::ClassParams = {
		&AFlameThrower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlameThrower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlameThrower_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFlameThrower()
	{
		if (!Z_Registration_Info_UClass_AFlameThrower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlameThrower.OuterSingleton, Z_Construct_UClass_AFlameThrower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlameThrower.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<AFlameThrower>()
	{
		return AFlameThrower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlameThrower);
	AFlameThrower::~AFlameThrower() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlameThrower, AFlameThrower::StaticClass, TEXT("AFlameThrower"), &Z_Registration_Info_UClass_AFlameThrower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlameThrower), 4164655632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_4210461520(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
