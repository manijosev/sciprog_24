#include <stdio.h>
#include <math.h>

int main(void) {
    // Initial and final points in degrees
    float a = 0.0;
    float b = 60.0;
    // Number of intervals
    float N = 12.0;
    // Convert to radians
    float a_rad = (M_PI * a) / 180;
    float b_rad = (M_PI * b) / 180;
    // Sum for trapezoidal rule
    float sum = tan(a_rad) + tan(b_rad);

    // Increment in degrees and conversion to radians
    for (int i = 5; i < 60; i += 5) {
        float rad = (M_PI * i) / 180;
        sum += 2 * tan(rad);
    }

    // Final computation of the integral
    sum = sum * (b_rad - a_rad) / (2 * N);

    // Print the computed value
    printf("Computed Integral of tan(x) from 0 to PI/3 is %f\n", sum);

    // Compare to the exact value log(2)
    float abs_difference = fabs(sum - log(2));
    printf("Actual Value should be  %f\n", sum);
    printf("Absolute difference between computed and actual value is %f\n", abs_difference);

    return 0;
}


