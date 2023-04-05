# C++ Demo Application for IAR Visual State

IAR Visual State can generate code using the C++ language.

## Pre-requisites
- [Visual Studio 2022+](https://visualstudio.microsoft.com/vs/) with .NET CLR desktop development components (C++)

## Build the application

### IAR Visual State
The Visual State project is set to generate C code (with C-SPY Link support) by default.

1. Go to __Project__ → __Options__ → __Code generation...__ (<kbd>Alt</kbd>+<kbd>F9</kbd>).
2. In the __Configuration__ tab, de-select __Generate for C-SPYLink__ and __Readable code genration__.
3. Select __C++ code generation__.
4. Press `  OK  ` to close the window.
5. Go to __Project__ → __Code generate__ (<kbd>F9</kbd>).

>__Note__ The generated code can be found on the local repository root directory, under the `VS_coder` folder.

### Visual Studio
1. Open the solution (`.sln`) inside the [VisualState_Demo](VisualState_Demo) folder.
2. Choose __Debug__ → __Start Debugging__ (<kbd>F5</kbd>).

https://user-images.githubusercontent.com/54443595/230452308-531f6568-4725-4b06-8fa9-c34be5974bef.mp4
