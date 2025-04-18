/*
Given a salary, calculate the new salary, the money earned from the raise,
and the percentage applied based on the following salary ranges:

| Salary Range              | Percentage |
|---------------------------|------------|
| 0 - 400.00                | 15%        |
| 400.01 - 800.00           | 12%        |
| 800.01 - 1200.00          | 10%        |
| 1200.01 - 2000.00         | 7%         |
| Above 2000.00             | 4%         |
*/

#include <stdio.h>
int main()
{
    double salary, increase, new_salary;
    int percent;

    // Read the current salary
    scanf("%lf", &salary);

    // Determine the percentage based on the salary range
    if (salary <= 400.00) {
        percent = 15;
    } else if (salary <= 800.00) {
        percent = 12;
    } else if (salary <= 1200.00) {
        percent = 10;
    } else if (salary <= 2000.00) {
        percent = 7;
    } else {
        percent = 4;
    }

    // Calculate raise and new salary
    increase = salary * percent / 100.0;
    new_salary = salary + increase;

    // Print results with 2 decimal places
    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n", increase);
    printf("Em percentual: %d %%\n", percent); // %% to print "%" symbol

    return 0;
}
