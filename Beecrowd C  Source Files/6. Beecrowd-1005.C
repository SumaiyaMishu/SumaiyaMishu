/* Read two floating points' values of double precision
 A and B, corresponding to two student's grades. After
 this, calculate the student's average, considering that
 grade A has weight 3.5 and B has weight 7.5. Each grade
 can be from zero to ten, always with one digit after the
 decimal point. Don’t forget to print the end of line after
 the result, otherwise you will receive “Presentation Error”.
 Don’t forget the space before and after the equal sign.

*/

#include<stdio.h>  //header file
int main()  // main function
{
    double A, B, X, Y;  // declaring variables
    scanf("%lf %lf",&A, &B);  // taking inputs
    X= A*3.5+B*7.5;  // calculation
    Y= X/(3.5+7.5);  // calculaation
    printf("MEDIA = %.5lf\n",Y);  // result
    return 0; // return
}
