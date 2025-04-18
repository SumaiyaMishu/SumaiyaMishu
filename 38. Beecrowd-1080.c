/*Read 100 integer numbers. Print the highest read value and the input position.*/


#include <stdio.h>

int main() {
    int numbers[100];  // Array to store the 100 integers
    int max = 0;       // Variable to keep track of the maximum value
    int position = 0;  // Variable to store the position of the maximum value

    // Loop to read 100 integers
    for (int i = 0; i < 100; i++) {
        scanf("%d", &numbers[i]);
        // Check if the current number is greater than the maximum value
        if (numbers[i] > max) {
            max = numbers[i];        // Update max value
            position = i + 1;        // Update position (1-based index)
        }
    }

    // Print the highest value and its position
    printf("%d\n", max);
    printf("%d\n", position);

    return 0;
}
