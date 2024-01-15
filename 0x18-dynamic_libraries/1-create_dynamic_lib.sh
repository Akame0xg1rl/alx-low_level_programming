#!/bin/bash

# Compile all .c files into a shared library
gcc -shared -fPIC -o liball.so *.c 
