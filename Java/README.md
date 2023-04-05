# Java Demo Application for IAR Visual State

IAR Visual State can generate code using the Java language.

## Pre-requisites
- [Eclipse for Java Developers 2023-03+](https://www.eclipse.org/downloads/packages/)

## Build the application

### IAR Visual State
The Visual State project is set to generate C code (with C-SPY Link support) by default.

1. Go to __Project__ → __Options__ → __Code generation...__ (<kbd>Alt</kbd>+<kbd>F9</kbd>).
2. In the __Configuration__ tab, de-select __Generate for C-SPYLink__ and, instead, select __Java code generation__.
3. Press `  OK  ` to close the window.
4. Go to __Project__ → __Code generate__ (<kbd>F9</kbd>).

>__Note__ The generated code can be found on the local repository root directory, under the `VS_coder` folder.

### Eclipse for Java Developers
1. `  Launch  ` a new workspace located on the repository's root directory (`/path/to/visual-state-demo`).
2. Go to __File__ → __Import__ → __General__ → __Existing projects into Workspace__.
3. `  Browse  ` to select the `visual-state-demo` folder as root directory.
4. Make sure the __VisualState_Demo__ project is selected and `  Finish  `.
5. Close the Eclipse Welcome Screen and, in the __Package Explorer__ select the __VisualState_Demo__ project. 
6. In the main menu, select __Run__ → __Run as...__ → __Java Application__ (<kbd>Alt</kbd>+<kbd>Shift</kbd>+<kbd>X</kbd>,<kbd>J</kbd>).

![image](https://user-images.githubusercontent.com/54443595/229733921-5b6b717a-e98a-41b7-8ba0-a94eb27b59f5.png)

