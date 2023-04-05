# Getting into the right state with IAR Visual State

[IAR Visual State](https://iar.com/vs) is a solution for designing, simulating and verifying state machines. Beyond that, it can generate `C`, `C++`, `C#` or `Java` code correspondent to the system design. Relying on a standardized API, projects powered by IAR Visual State scale with robustness.

In this repository you will find a ready-to-use project example. Demonstration applications written in the supported languages will take advantage of the same design, relying on the code generation capabilities of IAR Visual State. 

>__Note__ This simple example was chosen to make it easy to explore the solution's capabilities. Visit the IAR Visual State **Information Center**, available from its **Help** menu, for slightly more complex examples.


## Pre-requisites
- IAR Visual State V11.2.1+ ([14-day trial version available](https://www.iar.com/products/iar-visual-state/iar-visual-state-free-trial/))


## Running the examples
The IAR Visual State project designs a finite-state machine (FSM) that models three colored LEDs similar to a traffic lights device behavior. There are two modes of operation: `<full>`, which includes an additional state named "State_all" where "Red", "Yellow" and "Green" are all turned on, or `<reduced>` where transitions from/to "State_all" are simply excluded.

![image](https://user-images.githubusercontent.com/54443595/229726371-7de85b14-b0fc-4dd3-939c-28d01d7335ea.png)

>__Note__ IAR provides a [step-by-step guide](https://wwwfiles.iar.com/vs/StepByStep.pdf) on how to create an entire FSM.


To get started, clone this repository.

### IAR Visual State
1. In IAR Visual State, open the [VisualState/Workspace.vnw](VisualState) file.

2. Select the FSM mode of operation.

![image](https://user-images.githubusercontent.com/54443595/229727625-1384fa53-6ef9-406a-8ec9-d3b912faa376.png)

3. Verify the system: __Project__ → __Verify System__ (<kbd>F10</kbd>).

>__Note__ Using the `<<Complete model>>` will result in ambiguous transitions when verifying the system.

4. Simulate the system: __Project__ → __Simulate Project__ (<kbd>F8</kbd>)

5. Choose __Debug__ → __Graphical Animation__.

6. In the __Simulator__ window, under the __Events__ tab, click on the events `eButton1()`, `eButton2()` and `SE_RESET()` to generate events that will update the graphical animation accordingly. The `SE_RESET()` is the first event and it happens in the initial state.

![vs-simulator](https://user-images.githubusercontent.com/54443595/230769138-f7a20fbc-e57e-4e7b-86a5-de4b4dd2d59b.gif)


After ensuring the simulated system do not show flaws, proceed to the demo application implementation in the desired language:

- [C](C)
- [C#](CSharp)
- [C++](C++)
- [Java](Java)

## Summary
IAR Visual State is a powerful state machine design tool that you can try right now. Its standardized API brings robustness and simplifies implementation for one or more target platforms.