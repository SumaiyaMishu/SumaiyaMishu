/* Make a program that prints the sequence like the following example.

Input
This problem doesn't have input.

Output
Print the sequence like the example below.

Input Sample	Output Sample
I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0*/
#include <stdio.h>
int main() {
    // input
    int I = 1, J = 60;

    // Loop to print the sequence
    while (J >= 0) {
        // Print the result
        printf("I=%d J=%d\n", I, J);
        I += 3;
        J -= 5;
    }

    return 0;
}
