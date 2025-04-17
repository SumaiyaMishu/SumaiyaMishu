/*
Write an program that reads two numbers X and Y (X < Y). After this,
show a sequence of 1 to y, passing to the next line to each X numbers.
*/

#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y); // Read values X (numbers per line) and Y (upper limit)

    for (int i = 1; i <= Y; i++) {
        printf("%d", i); // Print number

        if (i % X == 0) {
            printf("\n"); // New line after every X numbers
        } else {
            printf(" "); // Space between numbers
        }
    }

    return 0;
}
