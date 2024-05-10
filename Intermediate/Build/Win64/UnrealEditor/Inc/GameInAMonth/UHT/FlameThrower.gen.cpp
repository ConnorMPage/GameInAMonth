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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AFlameThrower();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AFlameThrower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	DEFINE_FUNCTION(AFlameThrower::execFireWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execRefillAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefillAmmo();
		P_NATIVE_END;
	}
	void AFlameThrower::StaticRegisterNativesAFlameThrower()
	{
		UClass* Class = AFlameThrower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireWeapon", &AFlameThrower::execFireWeapon },
			{ "RefillAmmo", &AFlameThrower::execRefillAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "FireWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFlameThrower_FireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "RefillAmmo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFlameThrower_RefillAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlameThrower);
	UClass* Z_Construct_UClass_AFlameThrower_NoRegister()
	{
		return AFlameThrower::StaticClass();
	}
	struct Z_Construct_UClass_AFlameThrower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlameThrowerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameThrowerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileSpawnLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlameThrower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlameThrower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlameThrower_FireWeapon, "FireWeapon" }, // 1992309625
		{ &Z_Construct_UFunction_AFlameThrower_RefillAmmo, "RefillAmmo" }, // 3864259872
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation = { "FireSpawnLocation", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, FireSpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation = { "ProjectileSpawnLocation", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, ProjectileSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlameThrower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlameThrower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlameThrower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlameThrower_Statics::ClassParams = {
		&AFlameThrower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlameThrower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AFlameThrower, AFlameThrower::StaticClass, TEXT("AFlameThrower"), &Z_Registration_Info_UClass_AFlameThrower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlameThrower), 69855860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_2662063770(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
