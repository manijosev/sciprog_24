#include<stdio.h>
#include<math.h>
#define N 12

float TanArr[N+1];
float degToRad(float degarg);
float trapRule();
int main(){
        int i;
        float a=0.0,b_deg=60.0;
        float deg;

        for(i=0;i<N;i++){
                deg=i*5.0;
                TanArr[i]=tan(degToRad(deg));
                printf("Tan[%d]=%f\n",i,TanArr[i]);
        }

        float area=trapRule();
        printf("\nComputed Integral using trapezoidal rule :%f\n",area);
        printf("Actual value is:%f\n",log(2.0));
        return 0;
}
float degToRad(float degarg){
        float pi=3.1415927;
        return((pi*degarg)/180.0);
}
float trapRule(){
        float area;
        int i;
        area=TanArr[0]+TanArr[N];
        for(i=1;i<N;i++){
                area=area+2*TanArr[i];
        }
        float mult_rad=degToRad((60.0-0.0)/(2*N));
        area=mult_rad*area;
        return area;
}
