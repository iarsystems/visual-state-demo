# Visual State Demo for Qt5 (C++)

## Pre-requisites
- Qt5

## Build the application

### IAR Visual State
The Visual State project is set to generate C code (with C-SPY Link support) by default.

1. Go to __Project__ → __Options__ → __Code generation...__ (<kbd>Alt</kbd>+<kbd>F9</kbd>).
2. In the __Configuration__ tab, de-select __Generate for C-SPYLink__ and __Readable code generation__.
3. Select __C++ code generation__.
4. Press `  OK  ` to close the window.
5. Go to __Project__ → __Code generate__ (<kbd>F9</kbd>).

>__Note__ The generated code can be found on the local repository root directory, under the `VS_coder` folder.

### Qt5
- To build the application from the command line
```
qmake qt5-vs-demo.pro
make
```
- To build the application from QtCreator
1. Open the project `qt5-vs-demo.pro` in QtCreator
2. Configure the project for the kit (e.g. "Desktop")
![Screenshot_20250211_113805](https://github.com/user-attachments/assets/c5d394e2-9be9-4832-a807-6c61740122aa)

3. Select __Build__ → __Build All Projects__
4. Select __Debug__ → __Debug Current Project__ (<kbd>F5</kbd>)

![Screenshot_20250211_115239](https://github.com/user-attachments/assets/4a8079db-b2f8-4a72-a8e7-562829754414)
