#include<stdio.h>

int iterGCD(int a,int b){
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int recurGCD(int a,int b){
    if(b==0)
        return a;
    else
        return(recurGCD(b,a%b));
}

int main(){
    int a,b,error;
    printf("Enter 2 positive integers : ");
    scanf("%d %d",&a,&b);
    if(a<=0 || b<=0){
        printf("please enter positive integers \n");
        return 1;
    }
    printf("iterGCD(%d, %d)=%d\n",a,b,iterGCD(a,b));
    printf("recurGCD(%d, %d)=%d",a,b,recurGCD(a,b));

    return 0;
}