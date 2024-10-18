#include<stdio.h>

long long int next_fib(long long int *a, long long int *b){
    long long int c = *a + *b;  // Calculate the next Fibonacci number
    *a = *b;          // Update (fn-2) to the current b (fn-1)
    *b = c;           // Update b (fn-1) to the new Fibonacci number (fn)
    return c;         // Return the new Fibonacci number
}

int main(void) {
    long long int n;
    printf("Enter the number of Fibonacci elements: ");
    scanf("%d", &n);

    long long int first = 0;
    long long int second = 1;

    if(n>=2){
        // print the first two Fibonacci numbers
        printf("%lld\t%lld\t", first, second);
    }

    if(n==1){
       // edge case
       printf("%lld", first);
    }

    for(int i = 0; i < n - 2; i++) {
        // Get the next Fibonacci number and prlong long int it
        printf("%lld\t", next_fib(&first, &second));
    }

    return 0;
}