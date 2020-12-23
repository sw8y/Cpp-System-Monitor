# CppND-System-Monitor

# Summary

This program was built as a requirement to progress through the Udacity C++ Nanodegree Program. More information regarding the starter code and project details can be found here - https://github.com/udacity/CppND-System-Monitor

IMPORTANT: This project has been developed to work within a Linux environment. Ensure that the operating system you are using is Linux-based. Furthermore, this project requires that the "ncurses" library is installed. To install, use the following command:`sudo apt install libncurses5-dev libncursesw5-dev`

## Instructions

1. Clone the project repository: `git clone https://github.com/sw8y/Cpp-System-Monitor`

2. Build the project: `make build`

3. Run the resulting executable: `./build/monitor`
![Starting System Monitor](images/starting_monitor.png)

4. Follow along with the lesson.

5. Implement the `System`, `Process`, and `Processor` classes, as well as functions within the `LinuxParser` namespace.

6. Submit!

## Make
This project uses [Make](https://www.gnu.org/software/make/). The Makefile has four targets:
* `build` compiles the source code and generates an executable
* `format` applies [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) to style the source code
* `debug` compiles the source code and generates an executable, including debugging symbols
* `clean` deletes the `build/` directory, including all of the build artifacts
