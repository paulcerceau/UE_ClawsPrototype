#include "PlayModeExtension.h"

#include "Toolkits/AssetEditorToolkit.h"

#define LOCTEXT_NAMESPACE "FPlayModeExtensionModule"

void FPlayModeExtensionModule::StartupModule()
{
	
	InitPlayModeExtension();

	UE_LOG(LogTemp, Warning, TEXT("Custom menu started"));
}

#pragma region PlayMode extension
//v =============================================================╗
//v PlayMode extension                                           ║



void FPlayModeExtensionModule::InitPlayModeExtension()
{
	
}

//^ PlayMode extension                                           ║
//^ =============================================================╝
#pragma endregion

void FPlayModeExtensionModule::ShutdownModule()
{
    
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FPlayModeExtensionModule, PlayModeExtension)