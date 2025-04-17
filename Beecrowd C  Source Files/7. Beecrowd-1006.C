/* Read three values (variables A, B and C), which are the
three student's grades. Then, calculate the average, considering
that grade A has weight 2, grade B has weight 3 and the grade C
has weight 5. Consider that each grade can go from 0 to 10.0,
always with one decimal place.

*/

#include<stdio.h> // heaader
int main() // main function
{
    double A, B, C, X, Y;  // variables
    scanf("%lf %lf %lf",&A, &B, &C);  //inputs
    X= A*2+B*3+C*5;  // calculations
    Y= X/(3+5+2);  //calcucations
    printf("MEDIA = %.1lf\n",Y);  //results
    return 0;
}
