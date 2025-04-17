/* Write a program that read two numbers X and Y and print the
result of dividing the X by Y. If it's not possible, print the
message "divisao impossivel". */

#include <stdio.h>
int main() {
    int N;    // Number of test cases
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);   // Read two integers

        if (Y == 0) {
            printf("divisao impossivel\n");   // Division by zero
        } else {
            float result = (float) X / Y;    // Cast to float to get decimal result
            printf("%.1f\n", result);    // Print with one decimal
        }
    }
    return 0;
}
