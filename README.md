# UE_ClawsPrototype

## How to
### How to open the project?

Make sure Unreal 5.2.1 is installed and you have a functional version of Visual Studio.

This tutorial uses [Fork](https://git-fork.com/).

1. Clone the project:
- a. Click on the green button "<> Code"
- b. Copy the HTTPS URL

![image](/Resources/HowTo/Launch/HT_Launch_01.png)
- c. Open Fork 
- d. Click on File>Clone

![image](/Resources/HowTo/Launch/HT_Launch_02.png)
- e. Select the parent folder
- f. Click on "Clone". This will take some time

![image](/Resources/HowTo/Launch/HT_Launch_03.png)

2. Open the project:
- a. Navigate to [ParentFolder]\UE_ClawsPrototype\UE_ClawsPrototype
- b. Right click on "UE_ClawsPrototype.uproject"
- c. Click on "Generate Visual Studio project files"

![image](/Resources/HowTo/Launch/HT_Launch_04.png)
- d. When its done, double click on "UE_ClawsPrototype.uproject"
- e. When this message pops, click on "Yes"

![image](/Resources/HowTo/Launch/HT_Launch_05.png)
- f. The project is opening in the background. Don't worry if nothing appears on your screen, it usually takes 5 to 10 minutes before this banner appears.

![image](/Resources/HowTo/Launch/HT_Launch_06.png)

#### The "Try rebuilding from source manually." error

If you are facing this error, it is most likely that you're missing some Visual Studio workloads (if not Visual Studio at all).

You can install them using the "Visual Studio Installer" app.

Make sure that you have the following ones:

![image](/Resources/HowTo/Launch/HT_Launch_Err_01.png)

If it still doesn't work, make sure you also installed Windows SDKs.

### How to enable Wwise?

Most of the game audio is managed using a Wwise integration. You can learn more about Wwise [here](https://www.audiokinetic.com/en/products/wwise).

/!\ Wwise doesn't work with Blueprint-only projects.

#### Mandatory for everyone

1. Install Wwise:
- a. Download Audiokinetic Launcher [here](https://www.audiokinetic.com/en/download)
- b. Open Audiokinetic Launcher (can be named "Wwise Launcher")
- c. From the "Wwise" tab, choose the **2023.1.0.8327** version. Click on "Install"

{Insert Image Here}

- d. Add "Authoring" and "SDK (C++)" Packages. Add "Microsoft" Deployment Platform

![image](/Resources/HowTo/Wwise/HT_Wwise_02.png)

#### Mandatory only if Unreal's Wwise plugin isn't source controlled

2. Install Unreal's Wwise plugin:
- a. Open Audiokinetic Launcher (can be named "Wwise Launcher")
- b. From the "Unreal Engine" tab, find "UE_ClawsPrototype" and click on the "Integrate Wwise in Project" button

![image](/Resources/HowTo/Wwise/HT_Wwise_03.png)

- c. Select the **2023.1.0.8327**.2849 version
- d. Make sure that "Wwise project path" is set to "[FOLDER YOU PUT THE GIT PROJECT ON]\UE_ClawsPrototype\UE_ClawsPrototype_WwiseProject\UE_ClawsPrototype_WwiseProject.wproj" assuming one already exist. Otherwise leave it empty, this will create another one from scratch.

![image](/Resources/HowTo/Wwise/HT_Wwise_04.png)
- e. Click on "Integrate"

#### Additional steps, not necessary on this project

Following steps are only there to give tips for a brand new install.

Please keep in mind that some steps could be simplified, but this is how we managed to make it work.

3. Wwise configuration
- a. Open Audiokinetic Launcher (can be named "Wwise Launcher")
- b. From the "Unreal Engine" tab, find "UE_ClawsPrototype" and click on the Wwise icon, then on "Wwise 2023.1.0.8367"

![image](/Resources/HowTo/Wwise/HT_Wwise_05.png)

- c. Open Project Settings: "Project>Project Settings" or "SHIFT+K"
- d. Go to "SoundBanks" and click on the three dots on the right of "Root Ouput Path"
- e. Find this location "[FOLDER YOU PUT THE GIT PROJECT ON]\UE_ClawsPrototype\UE_ClawsPrototype_WwiseProject\GeneratedSoundBanks\"

![image](/Resources/HowTo/Wwise/HT_Wwise_06.png)

4. Unreal's Wwise configuration
- a. Open UE_ClawsPrototype project
- b. Open Projects Settings: "Edit>Project Settings"
- c. Navigate to "Wwise>Integration Settings" and set "Root Output Path" to the exact same as 3.e. ("[FOLDER YOU PUT THE GIT PROJECT ON]\UE_ClawsPrototype\UE_ClawsPrototype_WwiseProject\GeneratedSoundBanks\")
- d. Navigate to "Wwise>User Settings" and tick "Auto Connect to WAAPI"

-e. To make sure that everything went well, open the Wwise Browser from "Window>Wwise Browser"
-f. If it did, you will see somthing similar to this:

![image](/Resources/HowTo/Wwise/HT_Wwise_07.png)

5. Load Wwise's module
- a. Open "UE_ClawsPrototype.sln"
- b. Navigate to "UE_ClawsPrototype>Games>UE_ClawsPrototype>Source>UE_ClawsPrototype>UE_ClawsPrototype.Build.cs" and add "AkAudio" to "PublicDependencyModuleNames".

![image](/Resources/HowTo/Wwise/HT_Wwise_08.png)


## Conventions

UE organization guideline and naming conventions: [here](https://github.com/Allar/ue5-style-guide)

Git commits convention:
- init: (*initialization*) first few commits to initialize the project
- feat: (*feature*) create something new
- ref: (*refactoring*) modify an already existing thing
- fix: (*fix*) bug fixes
- res: (*resources*) adding an asset (or anything in the resource folder)
- git: (*git*) git only related stuff

Using Git with UE5: [here](https://docs.unrealengine.com/5.0/en-US/source-control-in-unreal-engine/)
Naming convention tool: [here](https://www.unrealdirective.com/resource/asset-naming-conventions)