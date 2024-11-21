#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    // Checking that every row and column add up to M

    for(i=0;i<n;i++){
        int rowsum=0;
        for(j=0;j<n;j++){
            rowsum+=square[i][j];
        }
        if(rowsum !=M){
            printf("Rowsums donot match\n");
            return 0;
        }
    }

    for(j=0;j<n;j++){
            int colsum=0;
            for(i=0;i<n;i++){
                colsum+=square[i][j];
            }
            if(colsum !=M){
                 printf("Column Sums donot match\n");
                 return 0;
            }
    }

    // Checking that the main and secondary
    // diagonals each add up to M

    int maindiagsum=0;
    for(i=0;i<n;i++)
        maindiagsum+=square[i][i];
    if(maindiagsum!=M){
        printf("Main diagonal sums donot match\n");
        return 0;
    }

    int secdiagsum=0;
    for(i=0;i<n;i++)
        secdiagsum+=square[i][n-i-1];
    if(secdiagsum!=M){
            printf("secondarydiagonal sums donot match\n");
            return 0;
    }
    // If passed all checks, it is a magic square
    return 1;
}

