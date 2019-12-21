# working-with-memory
This repository provides almost everything needed to follow the ePortfolio on pointers into dark space. The `/pres` directory contains all necessary [`LaTeX`](https://www.latex-project.org/) files to build the slides used in the presentation. The `/demo` directory contains everything related to the live demo. The following describes how to get the demo project up and running.

## Table of Contents
- [1. Prerequisites](#1-prerequisites)
  * [1.1 Windows](#11-windows)
  * [1.2 Unix based systems](#12-unix-based-systems)
- [2. Correctly pulling the repository](#2-correctly-pulling-the-repository)
- [3. Build project files](#3-build-project-files)
  * [3.1 Windows](#31-windows)
  * [3.2 Unix based systems](#32-unix-based-systems)


## 1. Prerequisites

### 1.1 Windows
On Windows systems [`Visual Studio`](https://visualstudio.microsoft.com/vs/) is the best way to write C++ code. It provides all the necessary build tools like nmake, a compiler (MSVC) and IDE features.

### 1.2 Unix based systems
On Unix based systems `make` and `gcc` is required to use the provided project setup script. `gcc` may be used to build the code itself but the compiler as well as the IDE is up for personal preference.

## 2. Correctly pulling the repository
This repository includes it's build system as a [git submodule](https://git-scm.com/book/en/v2/Git-Tools-Submodules). That means after the repository is pulled with:
```
$ git clone https://github.com/themmj/working-with-memory.git
```
the submodules included in the repository have to be pulled seperately with:
```
$ git submodule update --init --recursive
```
The `--init` flag can be left out on subsequent pulls.

## 3. Build project files
If the [prerequisites](#1-prerequisites) are met and the repository was pulled [correctly](#2-correctly-pulling-the-repository) the platform specific build scripts can be used to build [Premake](https://premake.github.io/) and build the project files which will be used to start up the demo project. 

### 3.1 Windows
Visual Studio provides shortcuts to batch scripts (e.g. `x64 Native Tools Command Prompt for VS 2019`) which initalize a cmd instance where all tools provided by Visual Studio are set into environment variables. This allows scripts executed in such a cmd instance to use these tools like `nmake` as if they were added to the path.  
After opening up one of these cmd instances (preferably 64 bit native tools) and navigating into the `working-with-memory\demo` the provided batch script can be executed with:
```
> demoBuild.bat TYPE
```
where `TYPE` can be one of:
- vs2019
- vs2017
- gmake2
- codelite

For Visual Studio one of the vs201x options should be used.

### 3.2 Unix based systems
To build Premake and use it to generate the needed project files navigate to the `working-with-memory/demo` directory and execute:
```
$ ./demoBuild.sh build PLATFORM TYPE
```
where `PLATFROM` can be one of:
- osx
- linux  

and `TYPE` can be one of:
- gmake2
- xcode4
- codelite
