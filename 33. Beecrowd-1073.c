/*
Read an integer N. Print the square of each one of the even values from 1 to N
including N if it is the case.
*/

#include <stdio.h>
int main()
{
    int N, i; // Taking inputs
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {      // Loop
        if (i % 2 == 0) {     // Check if the number is even
            printf("%d^2 = %d\n", i, i * i);    // Print the square
        }
    }
    return 0;
}
