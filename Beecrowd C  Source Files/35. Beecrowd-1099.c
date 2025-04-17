/*
Read an integer N that is the number of test cases. Each test case is a line containing two
integer numbers X and Y. Print the sum of all odd values between them, not including X and Y.
*/
#include <stdio.h>
int main() {
    int N, X, Y, i, sum;
    // Read the number of test cases
    scanf("%d", &N);
    // Process each test case
    for (int t = 0; t < N; t++) {
        // Read the values of X and Y for the current test case
        scanf("%d %d", &X, &Y);
        // Initialize the sum to 0 for each test case
        sum = 0;
        // Ensure X is the smaller and Y is the larger value (swap if necessary)
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }
        // Loop through numbers between X and Y (exclusive)
        for (i = X + 1; i < Y; i++) {
            // Check if the number is odd
            if (i % 2 != 0) {
                sum += i;  // Add to the sum if it's odd
            }
        }

        // Print the result for the current test case
        printf("%d\n", sum);
    }

    return 0;
}
