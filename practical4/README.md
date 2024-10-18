# Practical 4

This subdirectory contains the code in C for practical 4.

## Files Included
1. TanArray.c  - Creates an array of tan values of [0,60] degrees inclusive of both
2. TrapFunction.c -  The trapezoidal rule, written as functions

## Compile Commands

* gcc -o TanArray TanArray.c -lm
* gcc -o TrapFunction TrapFunction.c -lm

## Execution commands and Outputs

* ./TanArray

```
Computed Integral of tan(x) from 0 to PI/3 is 0.695045
Actual Value should be  0.695045
Absolute difference between computed and actual value is 0.001898
```

* ./TrapFunction

```
Elements of the array are as follows :
0.000000
0.087489
0.176327
0.267949
0.363970
0.466308
0.577350
0.700208
0.839100
1.000000
1.191754
1.428148
```
