#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int delta;

double arctanh1(double x){
    double sum=0;
    for(int i=0;i<=delta;i++){
        sum+=pow(x,(2*i+1))/(2*i+1);
    }
    return sum;
}

double arctanh2(double x){
    double value=0.5*(logf(1+x)-logf(1-x));
    return value;
}


int main(void){

    double start=-0.9;
    double end=0.9;
    double interval=0.01;

    double difference = 0;

    // read delta from user
    printf("Enter delta value : ");
    scanf("%d",&delta);

    // Compute no of points to determine array length and define both arrays
    int no_points=(end-start)/interval;
    double array1[no_points];
    double array2[no_points];


    for(int j=0;j<=no_points;j++){
        // variable to produce value from the range
        double tmp=start+j*interval;
        array1[j]=arctanh1(tmp);
        array2[j]=arctanh2(tmp);

        //compute sum of absolute difference between 2 methods
        difference = fabs(array2[j]-array1[j]);



    }
    // compute mean of difference
    difference = difference/no_points;
    printf("Mean difference in values of method 1 and 2 is : %.10f",difference);

    return 0;
}