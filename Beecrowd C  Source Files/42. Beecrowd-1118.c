/* Write an program to read two scores of a student. Calculate
 and print the semester average. The program must accept only
 valid scores (a score must fit in the range [0.10]). Each score
 must be validated separately.

The program must print a message "novo calculo (1-sim 2-nao)"
that means "new calculate (1-yes 2-no)". After, the input will
be (1 or 2). 1 means a new calculation, 2 means that the execution
must be finished.*/

#include <stdio.h>
int main() {
    double grade, sum;
    int count, option;

    do {
        count = 0;
        sum = 0.0;
        while (count < 2) {    // Loop
            scanf("%lf", &grade);

            if (grade >= 0.0 && grade <= 10.0) {
                sum += grade;
                count++;
            } else {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2lf\n", sum / 2.0);    // Calculate and print average
        do {
            printf("novo calculo (1-sim 2-nao)\n");    // Ask the user for new calculation
            scanf("%d", &option);
        } while (option != 1 && option != 2);

    } while (option == 1);

    return 0;
}
