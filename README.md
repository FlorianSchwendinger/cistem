**CISTEM** is a stemming algorithm for the German language,
the algorithm is available for different languages at
[`https://github.com/LeonieWeissweiler/CISTEM`](https://github.com/LeonieWeissweiler/CISTEM). 
The **R** package **cistem** contains an interface to the 'C++' version of the code.

- **TODO**: `cistem.cpp` sets the locale to `setlocale(LC_ALL, "de_DE.UTF-8")` which is the reason why it is currently not accepted on **CRAN**. An easy fix could be to remove this line from the `C++` code an check on the startup if the correct locale is set and if not issue a warning.
