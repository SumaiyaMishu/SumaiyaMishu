/*
Write an algorithm to read a value A and a value N. Print the sum of
N numbers from A (inclusive). While N is negative or ZERO, a new N
(only N) must be read. All input values are in the same line.
*/
 #include <stdio.h>

int main() {
    int A, N, sum = 0;

    // Read input values A and N
    scanf("%d %d", &A, &N);

    // Ensure N is positive. If not, read a new N
    while (N <= 0) {
        scanf("%d", &N);
    }

    // Calculate the sum of N numbers starting from A
    for (int i = 0; i < N; i++) {
        sum += A + i; // Add A and the offset
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}
