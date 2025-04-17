/* The formula to calculate the area of a circumference
is defined as A = π . R2. Considering to this problem
that π = 3.14159:

Calculate the area using the formula given in
the problem description.*/

#include<stdio.h>  // header file
int main() // main function
{
    double A,R, pi=3.14159;  //declaring variables and value
    scanf("%lf",&R);  //taking inputs

    A= pi*R*R;  // claculation

    printf("A=%.4lf\n",A);  //output
    return 0;
}
