# working-with-memory
This repository provides almost everything needed to follow the ePortfolio on pointers into dark space. The `/pres` directory contains all necessary [`LaTeX`](https://www.latex-project.org/) files to build the slides used in the presentation. The `/demo` directory contains everything related to the live demo. The following describes how to get the demo project up and running.


## 1. Prerequisites

To build the demo executable `make` and `gcc` is required. Both are for example included in the `build-essential` package. If you are on Windows feel free to use a WSL or an SUSE image you may have installed. In terms of IDEs the sky is the limit.

## 2. Build demo executable
If the [prerequisites](#1-prerequisites) are met navigate to the demo directory. The command  
```
$ make
```  
should be enough to build the demo executable and run it.