#!/bin/bash
c_files=$(find . -maxdepth 1 -name "*.c")
gcc -shared -o liball.so $c_files

