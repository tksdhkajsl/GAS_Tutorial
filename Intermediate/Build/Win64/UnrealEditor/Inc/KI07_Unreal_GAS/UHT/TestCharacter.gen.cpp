// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KI07_Unreal_GAS/Public/Character/TestCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_ATestCharacter();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_ATestCharacter_NoRegister();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UStatusAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_KI07_Unreal_GAS();
// End Cross Module References

// Begin Class ATestCharacter
void ATestCharacter::StaticRegisterNativesATestCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestCharacter);
UClass* Z_Construct_UClass_ATestCharacter_NoRegister()
{
	return ATestCharacter::StaticClass();
}
struct Z_Construct_UClass_ATestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/TestCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestValue_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TestValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_TestValue = { "TestValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, TestValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestValue_MetaData), NewProp_TestValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_StatusAttributeSet = { "StatusAttributeSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, StatusAttributeSet), Z_Construct_UClass_UStatusAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusAttributeSet_MetaData), NewProp_StatusAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_TestValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_StatusAttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_KI07_Unreal_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATestCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ATestCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestCharacter_Statics::ClassParams = {
	&ATestCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATestCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestCharacter()
{
	if (!Z_Registration_Info_UClass_ATestCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestCharacter.OuterSingleton, Z_Construct_UClass_ATestCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestCharacter.OuterSingleton;
}
template<> KI07_UNREAL_GAS_API UClass* StaticClass<ATestCharacter>()
{
	return ATestCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCharacter);
ATestCharacter::~ATestCharacter() {}
// End Class ATestCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestCharacter, ATestCharacter::StaticClass, TEXT("ATestCharacter"), &Z_Registration_Info_UClass_ATestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestCharacter), 3689864117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_3369271782(TEXT("/Script/KI07_Unreal_GAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
