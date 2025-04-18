/* Make a program that reads a seller's name, his/her fixed salary
and the sale's total made by himself/herself in the month (in money).
Considering that this seller receives 15% over all products sold,
write the final salary (total) of this seller at the end of the month,
with two decimal places.

- Don’t forget to print the line's end after the result,
otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces.*/

#include<stdio.h>  // header file
int main()  // main function
{
    char x;  //character data type variable
    double a,b,r; //double data type variable
    scanf("%s %lf %lf", &x, &a, &b);  //inputs
    r= a+(b*.15);  //calculation
    printf("TOTAL = R$ %.2lf\n",r);  //output
    return 0;
}
