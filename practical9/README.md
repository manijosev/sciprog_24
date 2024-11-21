# Practical 9

This subdirectory contains the code in C for practical 8.

## Files Included
1. main.c  - C program to read a file and check if the matrix contained is a magic square
2. magic_square.h - C library defining the logic to check if a matrix is magic square
3. magic_square.txt - A txt file containing a sample magic square
4. not_magic_square.txt - A txt file containing a sample non-magic square matrix

## Compile Commands

* gcc -o main main.c


## Execution commands and Outputs

* ./main

```
Enter file name: magic_square.txt
No. lines, 3
Matrix from the file:
2 7 6
9 5 1
4 3 8
The matrix is a magic square

```

```
Enter file name: not_magic_square.txt
No. lines, 3
Matrix from the file:
1 2 3
4 5 6
7 8 9
Rowsums donot match
The matrix is not a magic square


```

