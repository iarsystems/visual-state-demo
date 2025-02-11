# Graphically design state machines and generate source code with IAR Visual State

[IAR Visual State](https://iar.com/visualstate) is a comprehensive solution for designing, simulating and verifying state machines. It goes beyond design by generating`C`, `C++`, `C#` or `Java` code corresponding to the system design. With its standardized API, projects powered by IAR Visual State achieve robustness and scalability.

In this repository you will find a ready-to-use project example. Demonstration applications written in the supported languages leverage the same design, utilizing the code generation capabilities of IAR Visual State.

>[!NOTE]
>This simple example was chosen to make it easy to explore the solution's capabilities in different languages. Visit the IAR Visual State **Information Center**, available from its **Help** menu, for slightly more complex examples.


## Pre-requisites
- IAR Visual State V11.2.1+ ([14-day trial version available](https://www.iar.com/products/free-trials/))


## Running the examples
The IAR Visual State project designs a finite-state machine (FSM) that models a simplified traffic lights device. There are two modes of operation: `<full>`, which includes an additional state named "State_all" where "Red", "Yellow" and "Green" are all turned on, or `<reduced>` where transitions from/to "State_all" are simply excluded.

![image](https://user-images.githubusercontent.com/54443595/229726371-7de85b14-b0fc-4dd3-939c-28d01d7335ea.png)

>[!NOTE]
>IAR provides a [step-by-step guide](https://wwwfiles.iar.com/vs/StepByStep.pdf) on how to create an entire FSM.


To get started, clone this repository.

### IAR Visual State
1. In IAR Visual State, open the [VisualState/Workspace.vnw](VisualState) file.

2. Select the FSM mode of operation.

![image](https://user-images.githubusercontent.com/54443595/229727625-1384fa53-6ef9-406a-8ec9-d3b912faa376.png)

3. Verify the system: __Project__ → __Verify System__ (<kbd>F10</kbd>).

>[!NOTE]
>Using the `<<Complete model>>` will result in ambiguous transitions when verifying the system.

4. Simulate the system: __Project__ → __Simulate Project__ (<kbd>F8</kbd>)

5. Choose __Debug__ → __Graphical Animation__.

6. In the __Simulator__ window, under the __Events__ tab, click on the events `SE_RESET()`, `eButton1()` and `eButton2()` to generate events that will update the graphical animation accordingly.

![vs-simulator](https://user-images.githubusercontent.com/54443595/230769138-f7a20fbc-e57e-4e7b-86a5-de4b4dd2d59b.gif)


After ensuring the simulated system do not show flaws, proceed to the demo application implementation in the desired language:

- [C](C)
- [C#](C#)
- [C++](C++)
- [Java](Java)

## Summary
IAR Visual State is a powerful state machine design tool available for immediate use. Its standardized API enhances robustness and simplifies implementation across one or more target platforms.

[__` Follow us `__](https://github.com/iarsystems) on GitHub to get updates about tutorials like this and more.


## Issues
For technical support contact [IAR Customer Support][url-iar-customer-support].

For questions or suggestions related to this tutorial: try the [wiki][url-repo-wiki] or check [earlier issues][url-repo-issue-old]. If those don't help, create a [new issue][url-repo-issue-new] with detailed information.


<!--links-->
[url-iar-customer-support]: https://iar.my.site.com/mypages/s/contactsupport

[url-repo-wiki]: https://github.com/iarsystems/visual-state-demo/wiki
[url-repo-issue-new]: https://github.com/iarsystems/visual-state-demo/issues/new
[url-repo-issue-old]: https://github.com/iarsystems/visual-state-demo/issues?q=is%3Aissue+is%3Aopen%7Cclosed


