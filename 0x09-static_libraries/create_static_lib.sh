#!/bin/bash
C_FILES=$(find . -maxdepth 1 -type f -name "*.c")
for file in $C_FILES; do
	gcc -c $file -o ${file%.c}.o
	ar rcs liball.a ${file%.c}.o
done
