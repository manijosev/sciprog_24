#include<stdio.h>
#include<stdlib.h>

int * allocatearray(int n);
void fillwithones(int *p,int n);
void printarray(int *p,int n);
void freepointer(int *p);

int main(){
    int size;
    printf("Enter target array size : ");
    scanf("%d",&size);

    if(size<0 || size ==0){
        printf("Array size cannot be zero or negative\n");
        return 0;
    }

    int * array;
    array = allocatearray(size);
    fillwithones(array,size);
    printarray(array,size);
    freepointer(array);

    return 0;
}


int * allocatearray(int n){
    return ((int *) malloc(n*sizeof(int)));
}

void fillwithones(int *p,int n){
    for(int i=0;i<n;i++)
        p[i]=1;
}
void printarray(int *p,int n){
    for(int i=0;i<n;i++)
            printf("%d ",p[i]);
    printf("\n");
}

void freepointer(int *p){
    free(p);
}