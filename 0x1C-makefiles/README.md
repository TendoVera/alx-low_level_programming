This project introduces makefiles which are used to help decide which parts of a large program need to be recompiled.

Task 0:
Create your first Makefile.

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: none

Task 1:
Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC
CC: the compiler to be used
SRC: the .c files

Task 2:
Create your first useful Makefile.

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
The all rule should recompile only the updated source files
You are not allowed to have a list of all the .o files
