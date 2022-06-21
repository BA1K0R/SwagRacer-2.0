// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwagRacer2/SwagRacer2GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwagRacer2GameModeBase() {}
// Cross Module References
	SWAGRACER2_API UClass* Z_Construct_UClass_ASwagRacer2GameModeBase_NoRegister();
	SWAGRACER2_API UClass* Z_Construct_UClass_ASwagRacer2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SwagRacer2();
// End Cross Module References
	void ASwagRacer2GameModeBase::StaticRegisterNativesASwagRacer2GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASwagRacer2GameModeBase);
	UClass* Z_Construct_UClass_ASwagRacer2GameModeBase_NoRegister()
	{
		return ASwagRacer2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASwagRacer2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwagRacer2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SwagRacer2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwagRacer2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SwagRacer2GameModeBase.h" },
		{ "ModuleRelativePath", "SwagRacer2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwagRacer2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwagRacer2GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwagRacer2GameModeBase_Statics::ClassParams = {
		&ASwagRacer2GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASwagRacer2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwagRacer2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwagRacer2GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASwagRacer2GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwagRacer2GameModeBase.OuterSingleton, Z_Construct_UClass_ASwagRacer2GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASwagRacer2GameModeBase.OuterSingleton;
	}
	template<> SWAGRACER2_API UClass* StaticClass<ASwagRacer2GameModeBase>()
	{
		return ASwagRacer2GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwagRacer2GameModeBase);
	struct Z_CompiledInDeferFile_FID_SwagRacer2_Source_SwagRacer2_SwagRacer2GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SwagRacer2_Source_SwagRacer2_SwagRacer2GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASwagRacer2GameModeBase, ASwagRacer2GameModeBase::StaticClass, TEXT("ASwagRacer2GameModeBase"), &Z_Registration_Info_UClass_ASwagRacer2GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwagRacer2GameModeBase), 3276852840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SwagRacer2_Source_SwagRacer2_SwagRacer2GameModeBase_h_2112426553(TEXT("/Script/SwagRacer2"),
		Z_CompiledInDeferFile_FID_SwagRacer2_Source_SwagRacer2_SwagRacer2GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SwagRacer2_Source_SwagRacer2_SwagRacer2GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
