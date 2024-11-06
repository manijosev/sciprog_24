#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int order;
    int x;
    int fact=1;
    double estimate=0.0;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the order of polynomial : ");
    scanf("%d",&order);
    if(order<0){
        printf("Order is zero or positive");
        return 0;
    }

    double * polarray = (double *) malloc(order * sizeof(double));
    for(int i=0;i<order;i++){
        fact=1;
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }

        polarray[i] = pow(x,i) / fact;
        estimate=estimate+polarray[i];
    }
    free(polarray);
    printf("Estimated value upto %d polynomials is : %.15f",order,estimate);
    printf("\nActual value is : %.15f",exp(x));
    printf("\nDifference is : %.15f\n",exp(x)-estimate);


    return 0;
}