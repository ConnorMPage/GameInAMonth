// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/UBTTask_ShootCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUBTTask_ShootCharacter() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_UUBTTask_ShootCharacter();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_UUBTTask_ShootCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	void UUBTTask_ShootCharacter::StaticRegisterNativesUUBTTask_ShootCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUBTTask_ShootCharacter);
	UClass* Z_Construct_UClass_UUBTTask_ShootCharacter_NoRegister()
	{
		return UUBTTask_ShootCharacter::StaticClass();
	}
	struct Z_Construct_UClass_UUBTTask_ShootCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddHeightToTrace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddHeightToTrace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UBTTask_ShootCharacter.h" },
		{ "ModuleRelativePath", "UBTTask_ShootCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "UBTTask_ShootCharacter" },
		{ "ModuleRelativePath", "UBTTask_ShootCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUBTTask_ShootCharacter, WeaponDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_WeaponDamage_MetaData), Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_WeaponDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_AddHeightToTrace_MetaData[] = {
		{ "Category", "UBTTask_ShootCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//amount of damage for apply damage\n" },
#endif
		{ "ModuleRelativePath", "UBTTask_ShootCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "amount of damage for apply damage" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_AddHeightToTrace = { "AddHeightToTrace", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUBTTask_ShootCharacter, AddHeightToTrace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_AddHeightToTrace_MetaData), Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_AddHeightToTrace_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_WeaponDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::NewProp_AddHeightToTrace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUBTTask_ShootCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::ClassParams = {
		&UUBTTask_ShootCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUBTTask_ShootCharacter()
	{
		if (!Z_Registration_Info_UClass_UUBTTask_ShootCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUBTTask_ShootCharacter.OuterSingleton, Z_Construct_UClass_UUBTTask_ShootCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUBTTask_ShootCharacter.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<UUBTTask_ShootCharacter>()
	{
		return UUBTTask_ShootCharacter::StaticClass();
	}
	UUBTTask_ShootCharacter::UUBTTask_ShootCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUBTTask_ShootCharacter);
	UUBTTask_ShootCharacter::~UUBTTask_ShootCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_UBTTask_ShootCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_UBTTask_ShootCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUBTTask_ShootCharacter, UUBTTask_ShootCharacter::StaticClass, TEXT("UUBTTask_ShootCharacter"), &Z_Registration_Info_UClass_UUBTTask_ShootCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUBTTask_ShootCharacter), 3223044449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_UBTTask_ShootCharacter_h_1866269588(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_UBTTask_ShootCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_UBTTask_ShootCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
