// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KI07_Unreal_GAS/Public/GameAbility/StatusAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UStatusAttributeSet();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UStatusAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_KI07_Unreal_GAS();
// End Cross Module References

// Begin Class UStatusAttributeSet
void UStatusAttributeSet::StaticRegisterNativesUStatusAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusAttributeSet);
UClass* Z_Construct_UClass_UStatusAttributeSet_NoRegister()
{
	return UStatusAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UStatusAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameAbility/StatusAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GameAbility/StatusAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/GameAbility/StatusAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/GameAbility/StatusAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusAttributeSet_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatusAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_KI07_Unreal_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusAttributeSet_Statics::ClassParams = {
	&UStatusAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatusAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatusAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatusAttributeSet()
{
	if (!Z_Registration_Info_UClass_UStatusAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusAttributeSet.OuterSingleton, Z_Construct_UClass_UStatusAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusAttributeSet.OuterSingleton;
}
template<> KI07_UNREAL_GAS_API UClass* StaticClass<UStatusAttributeSet>()
{
	return UStatusAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusAttributeSet);
UStatusAttributeSet::~UStatusAttributeSet() {}
// End Class UStatusAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_GameAbility_StatusAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusAttributeSet, UStatusAttributeSet::StaticClass, TEXT("UStatusAttributeSet"), &Z_Registration_Info_UClass_UStatusAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusAttributeSet), 287124330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_GameAbility_StatusAttributeSet_h_3668527727(TEXT("/Script/KI07_Unreal_GAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_GameAbility_StatusAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_GameAbility_StatusAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
