/*Read an integer N (2 < N < 1000). Print the multiplication table of N.
1 x N = N      2 x N = 2N        ...       10 x N = 10N*/
#include <stdio.h>
int main()
{
    int N;
    // Read the input
    scanf("%d", &N);
    // Check the constraint: 2 < N < 1000
    if (N > 2 && N < 1000) {
        // Loop through numbers 1 to 10 to print the multiplication table
        for (int i = 1; i <= 10; i++) {
            // Print the result for each i from 1 to 10
            printf("%d x %d = %d\n", i, N, i * N);
        }
    }
    return 0;
}
