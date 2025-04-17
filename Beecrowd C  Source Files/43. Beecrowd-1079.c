/*Read an integer N, which represents the number of
following test cases. Each test case consists of three
floating-point numbers, each one with one digit after
the decimal point. Print the weighted average for each
of these sets of three numbers, considering that the first
number has weight 2, the second number has weight 3 and
the third number has weight 5. */

#include <stdio.h>
int main() {
    int N; // Number of test cases
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);

        // Calculate weighted average
        float average = (a * 2 + b * 3 + c * 5) / 10.0;

        // Print result with 1 decimal place
        printf("%.1f\n", average);
    }

    return 0;
}
