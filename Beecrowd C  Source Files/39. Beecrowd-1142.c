/*
Write a program that reads an integer N.
This N is the number of output lines printed by this program. */
#include <stdio.h>
int main() {
    int N, count = 1;
    // Read the number of lines
    scanf("%d", &N);
    // Loop
    for (int i = 0; i < N; i++) {
        // Print 3 numbers followed by "PUM"
        printf("%d %d %d PUM\n", count, count + 1, count + 2);
        // Increment count by 4 to skip the "PUM" number
        count += 4;
    }
    return 0;
}
