#include <stdio.h>
#include <math.h>

float degToRad(float degang){
    float pi= 3.1415927;
    return( (pi*degang)/180.0);
}

float trapezoidal(float start, float end,float N){
    // Convert to radians
    float start_rad = degToRad(start);
    float end_rad = degToRad(end);
    // Sum for trapezoidal rule
    float sum = tan(start_rad) + tan(end_rad);

    // Increment in degrees and conversion to radians
    for (int i = 5; i < 60; i += 5) {
        float rad = degToRad(i);
        sum += 2 * tan(rad);
    }

    // Final computation of the integral
    sum = sum * (end_rad - start_rad) / (2 * N);

    return sum;
}

int main(void) {
    // Initial and final points in degrees
    float a = 0.0;
    float b = 60.0;
    // Number of intervals
    float N = 12.0;

    // Print the computed value
    printf("Computed Integral of tan(x) from 0 to PI/3 is %f\n", trapezoidal(a,b,N));

    // Compare to the exact value log(2)
    float abs_difference = fabs(trapezoidal(a,b,N) - logf(2));
    printf("Actual Value should be  %f\n", logf(2));
    printf("Absolute difference between computed and actual value is %f\n", abs_difference);

    return 0;
}





