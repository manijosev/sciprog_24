#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    f= fopen(filename,"r");
    if(f == NULL){
        printf("Cannot Open file \n");
        exit(1);
    }



    int i;
    int row=0;
    // allocate memory for matrix dynamically
    int **matrix=(int **)malloc(n *sizeof(int *));
    if (matrix == NULL) {
            fclose(f);
            printf("Memory allocation failed!\n");
            return 1;
    }

    // allocate memory for each row
    for(int i=0;i<n;i++){
        matrix[i] = (int *)malloc(n * sizeof(int)); // n columns for each row
        if (matrix[i] == NULL) {
                    printf("Memory allocation failed for row %d!\n", i);
                    fclose(f);
                    return 1;
        }
    }
    //read the matrix
    while(row < n){
        for(int col=0;col<n;col++){
            if(fscanf(f, "%d", &matrix[row][col]) != 1){
                printf("Error reading element at row %d column %d",row,col);
                fclose(f);
                return 1;
            }
        }
        row++;
    }

    //matrix print
    printf("Matrix from the file:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

   if(isMagicSquare(matrix,n) == 1){
        printf("The matrix is a magic square\n");
   }
   else{
        printf("The matrix is not a magic square\n");
   }


    // Freeing each row separately before freeing the array of pointers
    for(i=0;i<n;i++){
        free(matrix[i]);
    }

    //free the matrix row pointers
    free(matrix);
    fclose(f);


    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}
