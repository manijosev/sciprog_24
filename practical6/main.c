#include<stdio.h>

// prototype
void matmul(int n, int p, int q, double A[n][p],double B[p][q],double C[n][q]);


int main(){

    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];
    int i,j,k; // Looping variables

    // Initialise and print matrices A, B. using single loop minding the complexity
    printf("\nMatrix A\n");
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            A[i][j]=i+j;
            printf("%3.0f",A[i][j]);

        }
        printf("\n");
    }
    printf("\nMatrix B\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            B[i][j]=i-j;
            printf("%3.0f",B[i][j]);
        }
        printf("\n");
    }
    // C is filled with zero
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            C[i][j]=0;
        }
    }

    // Multiplication
    matmul(n,p,q,A,B,C);
    // Print matrix C
    printf("\nMatrix C\n");
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            printf("%3.0f",C[i][j]);
        }
        printf("\n");
    }


    return 0;
}