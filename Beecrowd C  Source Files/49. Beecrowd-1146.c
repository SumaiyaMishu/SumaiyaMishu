/*
Your program must read an integer X indefinited times (the program
must stop when X is equal to zero). For each X print the sequence
from 1 to X, with one space between each one of these numbers.

PS: Be carefull. Don't leave any space after the last number of
each line, otherwise you'll get Presentation Error.
*/

#include <stdio.h>

int main() {
    int n, i;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        for (i = 1; i <= n; i++) {
            if (i == 1) {
                printf("%d", i); // First number: no leading space
            } else {
                printf(" %d", i); // Remaining numbers: with leading space
            }
        }
        printf("\n"); // Move to the next line after printing the sequence
    }

    return 0;
}
