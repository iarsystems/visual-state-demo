# C Demo Application for IAR Visual State

IAR Visual State can generate code using the C language.

## Pre-requisites
- [IAR Embedded Workbench for Arm V9.32.2+](https://iar.com/ewarm) ([14-day trial version available](https://www.iar.com/products/architectures/arm/iar-embedded-workbench-for-arm/iar-embedded-workbench-for-arm---free-trial-version/))

## Build the application

### IAR Visual State
The Visual State project is set to generate C code (with C-SPY Link support) by default.

1. Go to __Project__ → __Code generate__ (<kbd>F9</kbd>).

>__Note__ The generated code can be found on the local repository root directory, under the `VS_coder` folder.

### IAR Embedded Workbench
1. Go to __File__ → __Open Workspace__ and choose [C/VisualStateDemo.eww](#).
2. Choose __Project__ → __Download and Debug__ (<kbd>Ctrl</kbd>+<kbd>D</kbd>) to start executing the application.
3. Choose __View__ → __Macros__ → __Macros Quicklaunch__.
4. Choose `<click to add>` to add the following [macros](Src/cspy.mac): `pressButton1()` and repeat for adding `pressButton2()`.

![image](https://user-images.githubusercontent.com/54443595/229764440-bb20f5cf-eb7a-4180-9995-dea204956f60.png)

5. Choose __View__ → __Live Watch__.
6. Choose `<click to add>` to add the following structures to the __Live Watch__ window: `LED_RED`, `LED_YELLOW` and `LED_GREEN`. Unfold them to see their `state` member.

![image](https://user-images.githubusercontent.com/54443595/229801862-744580e0-b9f6-424c-8832-033da9abc5f8.png)

7. Choose __Visual State__ → __Sampling Buffer Capture Settings__ → __Live__. 
8. Choose __Visual State__ → __View__ → __Graphical Animation__ → __System1__.
9. Press <kbd>F5</kbd> to resume the program execution.
10. In the __Macros Quicklaunch__ window, double-click on the __Recalculate icon__ for executing the associated C-SPY macros that will generate the events.


https://user-images.githubusercontent.com/54443595/229807676-2da79aca-99e3-483a-8e37-587c0903f7ba.mp4







