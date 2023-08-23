#!/bin/bash
gcc -Wall -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
