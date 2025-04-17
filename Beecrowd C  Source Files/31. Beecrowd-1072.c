/*
Read an integer N, which represents the number of integer values that will be input.
For each of the next N integers, check if the number is **inside** the interval [10, 20] (inclusive) or **outside** of it.

*/
#include <stdio.h>
int main() {
    int N, x, i;
    int in = 0, out = 0;

    // Read the number of values
    scanf("%d", &N);

    // Loop to read N values
    for (i = 0; i < N; i++) {
        scanf("%d", &x);

        // Check if the value is in [10, 20]
        if (x >= 10 && x <= 20) {
            in++;
        } else {
            out++;
        }
    }
    // Print the results
    printf("%d in\n%d out\n", in, out);
    return 0;
}
