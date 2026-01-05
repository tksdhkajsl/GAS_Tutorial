// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KI07_Unreal_GAS/Public/UI/BarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UBarWidget();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UBarWidget_NoRegister();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UResource_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_KI07_Unreal_GAS();
// End Cross Module References

// Begin Class UBarWidget Function SetProgressColor
struct Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics
{
	struct BarWidget_eventSetProgressColor_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BarWidget_eventSetProgressColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarWidget, nullptr, "SetProgressColor", nullptr, nullptr, Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::BarWidget_eventSetProgressColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::BarWidget_eventSetProgressColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBarWidget_SetProgressColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBarWidget_SetProgressColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBarWidget::execSetProgressColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProgressColor(Z_Param_InColor);
	P_NATIVE_END;
}
// End Class UBarWidget Function SetProgressColor

// Begin Class UBarWidget
void UBarWidget::StaticRegisterNativesUBarWidget()
{
	UClass* Class = UBarWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetProgressColor", &UBarWidget::execSetProgressColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBarWidget);
UClass* Z_Construct_UClass_UBarWidget_NoRegister()
{
	return UBarWidget::StaticClass();
}
struct Z_Construct_UClass_UBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BarWidget.h" },
		{ "ModuleRelativePath", "Public/UI/BarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Current;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBarWidget_SetProgressColor, "SetProgressColor" }, // 2773059113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBarWidget_Statics::NewProp_BackgroundProgressBar = { "BackgroundProgressBar", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBarWidget, BackgroundProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundProgressBar_MetaData), NewProp_BackgroundProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBarWidget_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBarWidget, Current), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBarWidget_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBarWidget, Max), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarWidget_Statics::NewProp_BackgroundProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarWidget_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarWidget_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_KI07_Unreal_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBarWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UResource_NoRegister, (int32)VTABLE_OFFSET(UBarWidget, IResource), false },  // 3698931849
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBarWidget_Statics::ClassParams = {
	&UBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBarWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBarWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBarWidget()
{
	if (!Z_Registration_Info_UClass_UBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBarWidget.OuterSingleton, Z_Construct_UClass_UBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBarWidget.OuterSingleton;
}
template<> KI07_UNREAL_GAS_API UClass* StaticClass<UBarWidget>()
{
	return UBarWidget::StaticClass();
}
UBarWidget::UBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBarWidget);
UBarWidget::~UBarWidget() {}
// End Class UBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_UI_BarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBarWidget, UBarWidget::StaticClass, TEXT("UBarWidget"), &Z_Registration_Info_UClass_UBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBarWidget), 2473461783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_UI_BarWidget_h_2472099666(TEXT("/Script/KI07_Unreal_GAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_UI_BarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_UI_BarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
