// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/EnemyCharacterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacterAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AEnemyCharacterAIController();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AEnemyCharacterAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	void AEnemyCharacterAIController::StaticRegisterNativesAEnemyCharacterAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacterAIController);
	UClass* Z_Construct_UClass_AEnemyCharacterAIController_NoRegister()
	{
		return AEnemyCharacterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyBehaviourTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyBehaviourTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyCharacterAIController.h" },
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree_MetaData[] = {
		{ "Category", "EnemyCharacterAIController" },
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree = { "EnemyBehaviourTree", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacterAIController, EnemyBehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree_MetaData), Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef_MetaData[] = {
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef = { "PlayerCharacterRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacterAIController, PlayerCharacterRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef_MetaData), Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacterAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacterAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacterAIController_Statics::ClassParams = {
		&AEnemyCharacterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyCharacterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacterAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyCharacterAIController()
	{
		if (!Z_Registration_Info_UClass_AEnemyCharacterAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacterAIController.OuterSingleton, Z_Construct_UClass_AEnemyCharacterAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyCharacterAIController.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<AEnemyCharacterAIController>()
	{
		return AEnemyCharacterAIController::StaticClass();
	}
	AEnemyCharacterAIController::AEnemyCharacterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacterAIController);
	AEnemyCharacterAIController::~AEnemyCharacterAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacterAIController, AEnemyCharacterAIController::StaticClass, TEXT("AEnemyCharacterAIController"), &Z_Registration_Info_UClass_AEnemyCharacterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacterAIController), 518418758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_926308972(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS