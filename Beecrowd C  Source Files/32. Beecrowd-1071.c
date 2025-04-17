/*
Read two integer values X and Y. Print
the sum of all odd values between them
*/

#include <stdio.h>
int main()
{
    int x, y, i, sum = 0;

    // Read the two input values
    scanf("%d %d", &x, &y);
    // If x is greater than y, swap the values
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    // Loop through numbers between x and y

    for (i = x+1 ; i < y; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
