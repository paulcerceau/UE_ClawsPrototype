#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FPlayModeExtensionModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
#pragma region PlayMode extension
    //v =============================================================╗
    //v PlayMode extension                                           ║
    
    void InitPlayModeExtension();

    //^ PlayMode extension                                           ║
    //^ =============================================================╝
#pragma endregion
};
