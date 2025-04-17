/*
Read three point floating values (A, B and C) and verify if is possible to make a
triangle with them. If it is possible, calculate the perimeter of the triangle
and print the message:

Perimetro = XX.X

If it is not possible, calculate the area of the trapezium which basis A and B and
C as height, and print the message:

Area = XX.X
*/

#include<stdio.h>      //header file
int main()       //main function
{
    double A,B,C,X,Y;    //variables
    //taking inputs
    scanf("%lf %lf %lf",&A, &B, &C);

    if (A+B>C && B+C>A && C+A>B)     //condition
    {
        X=A+B+C;
        printf("Perimetro = %.1lf\n",X);    //if condition is true print Perimetro
    }else
    {
        Y= (0.5)*C*(A+B);
        printf("Area = %.1lf\n",Y);    // if condition is false print Area
    }
    return 0;
}
