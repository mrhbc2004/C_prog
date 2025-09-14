# Procedure to create user defined header and use it
- First create .c file in the working directory which consists of the function definitions in it.
- Then create a .h file with a general name like "utilities.h" and write this code in it
```
#ifndef Headerfilename
#define Headerfilename

< Function Declarations>

#endif
```
- In the above code you can see that `#ifndef` is used to prevent redundant decalarations of the header
- `#define` will define the header file and write all the function declarations you have defined in the .c file
- To use the .h file in the code-- `#include "utilities.h"` this line should be present at the start of the code to use the functions
- While compiling the code compile both the `main.c ` and `utilities.c` to use the functions in the main.c file
- For example : ` gcc main.c utilities.c -o program`
