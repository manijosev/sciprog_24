#include <stdio.h>
#include <math.h>

float tan_values[13];

float degToRad(float degang){
    float pi= M_PI;
    return( (pi*degang)/180.0);
}

int main(void){

    for(int i=0;i<=12;i++){
        float radval=degToRad(i*5);
        tan_values[i]=tan(radval);

    }

    printf("Elements of the array are as follows : \n");
    for(int j=0;j<=12;j++){
        printf("%f\n",tan_values[j]);
    }

    return 0;
}