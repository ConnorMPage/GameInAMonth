// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/SpawnPads.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPads() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_ASpawnPads();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_ASpawnPads_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	DEFINE_FUNCTION(ASpawnPads::execSpawnEnemies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemies();
		P_NATIVE_END;
	}
	void ASpawnPads::StaticRegisterNativesASpawnPads()
	{
		UClass* Class = ASpawnPads::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemies", &ASpawnPads::execSpawnEnemies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnPads_SpawnEnemies_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnPads_SpawnEnemies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnPads.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnPads_SpawnEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnPads, nullptr, "SpawnEnemies", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnPads_SpawnEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnPads_SpawnEnemies_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpawnPads_SpawnEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnPads_SpawnEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnPads);
	UClass* Z_Construct_UClass_ASpawnPads_NoRegister()
	{
		return ASpawnPads::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnPads_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPadMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPadMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnPads_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPads_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnPads_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnPads_SpawnEnemies, "SpawnEnemies" }, // 459354473
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPads_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPads_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnPads.h" },
		{ "ModuleRelativePath", "SpawnPads.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPads_Statics::NewProp_SpawnPadMesh_MetaData[] = {
		{ "Category", "SpawnPads" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnPads.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnPads_Statics::NewProp_SpawnPadMesh = { "SpawnPadMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPads, SpawnPadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPads_Statics::NewProp_SpawnPadMesh_MetaData), Z_Construct_UClass_ASpawnPads_Statics::NewProp_SpawnPadMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPads_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "SpawnPads" },
		{ "ModuleRelativePath", "SpawnPads.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnPads_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPads, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPads_Statics::NewProp_EnemyClass_MetaData), Z_Construct_UClass_ASpawnPads_Statics::NewProp_EnemyClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnPads_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPads_Statics::NewProp_SpawnPadMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPads_Statics::NewProp_EnemyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnPads_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnPads>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnPads_Statics::ClassParams = {
		&ASpawnPads::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnPads_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPads_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPads_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnPads_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPads_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawnPads()
	{
		if (!Z_Registration_Info_UClass_ASpawnPads.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnPads.OuterSingleton, Z_Construct_UClass_ASpawnPads_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnPads.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<ASpawnPads>()
	{
		return ASpawnPads::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnPads);
	ASpawnPads::~ASpawnPads() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SpawnPads_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SpawnPads_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnPads, ASpawnPads::StaticClass, TEXT("ASpawnPads"), &Z_Registration_Info_UClass_ASpawnPads, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnPads), 3440785643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SpawnPads_h_4022649680(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SpawnPads_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_SpawnPads_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
