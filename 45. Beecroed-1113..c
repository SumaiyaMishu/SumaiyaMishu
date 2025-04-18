/*
Read an undetermined number of pairs of integer values. Write a
message for each pair indicating if this two numbers are in
ascending or descending order.
*/

#include <stdio.h>
int main() {
    int X, Y;
    while (1) {
        scanf("%d %d", &X, &Y);   // Read two integers

        if (X == Y) {
            break;    // Stop the loop if values are equal
        }
        if (X < Y) {
            printf("Crescente\n");    // Ascending
        } else {
            printf("Decrescente\n");    // Descending
        }
    }
    return 0;
}
