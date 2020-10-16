// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloWorldC/HelloWorldCGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelloWorldCGameModeBase() {}
// Cross Module References
	HELLOWORLDC_API UClass* Z_Construct_UClass_AHelloWorldCGameModeBase_NoRegister();
	HELLOWORLDC_API UClass* Z_Construct_UClass_AHelloWorldCGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HelloWorldC();
// End Cross Module References
	void AHelloWorldCGameModeBase::StaticRegisterNativesAHelloWorldCGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHelloWorldCGameModeBase_NoRegister()
	{
		return AHelloWorldCGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHelloWorldCGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelloWorldCGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloWorldC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelloWorldCGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HelloWorldCGameModeBase.h" },
		{ "ModuleRelativePath", "HelloWorldCGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelloWorldCGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelloWorldCGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHelloWorldCGameModeBase_Statics::ClassParams = {
		&AHelloWorldCGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHelloWorldCGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHelloWorldCGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHelloWorldCGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHelloWorldCGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelloWorldCGameModeBase, 3554195950);
	template<> HELLOWORLDC_API UClass* StaticClass<AHelloWorldCGameModeBase>()
	{
		return AHelloWorldCGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelloWorldCGameModeBase(Z_Construct_UClass_AHelloWorldCGameModeBase, &AHelloWorldCGameModeBase::StaticClass, TEXT("/Script/HelloWorldC"), TEXT("AHelloWorldCGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelloWorldCGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
