/*
Write a program that reads 6 numbers. These numbers will only be positive or
negative (disregard null values). Print the total number of positive numbers.
*/

#include<stdio.h>    //header file
int main()    //main function
{
    double a,b,c,d,e,f,z;   //declaring variables
    // Taking inputs form user
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    // conditions for counting positive numbers
    if (a>0){z++};
    if (b>0){z++};
    if (c>0){z++};
    if (d>0){z++};
    if (e>0){z++};
    if (f>0){z++};

    // printing the total number of positive numbers.
    printf("%lf valores positivos",z);

    return 0;
}
