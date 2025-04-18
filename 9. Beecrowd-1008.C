/*Write a program that reads an employee's number, his/her worked
hours number in a month and the amount he received per hour. Print
the employee's number and salary that he/she will receive at end of
the month, with two decimal places.

~Don’t forget to print the line's end after the result, otherwise
you will receive “Presentation Error”.

~Don’t forget the space before and after the equal signal and after the U$.

*/

#include<stdio.h>  // header file
int main()  //main function
{
    int a,b;  // integer data type variables
    double c, x;  // double data type variables

    scanf("%d %d %lf", &a, &b, &c);   //taking inputs
    x= b*c;  // calculations
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", a, x);//outputs
    return 0;
}
