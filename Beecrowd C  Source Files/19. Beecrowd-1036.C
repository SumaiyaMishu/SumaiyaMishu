/*
Read 3 floating-point numbers. After, print the roots of bhaskara’s
formula. If it's impossible to calculate the roots because a division
by zero or a square root of a negative number, presents the message
“Impossivel calcular”.
*/
#include<stdio.h>  //header file
#include<math.h>   //header file
int main()  //main function
{
    double A, B, C, R1, R2;  //variable declaration

    scanf("%lf %lf %lf ", &A, &B, &C);  //taking inputs

    double x= (B*B)-(4*A*C),y;  //declaring x and y as variables

    if ( A==0 || x<0 ){   // condition
            // print result if condition is true
         printf("Impossivel calcular\n");
    }
    else {   // if the condition iis false
    y = sqrt(x);
    R1 = (-B+y)/(2*A);
    printf("R1 = %.5lf\n",R1);
    R2 = (-B-y)/(2*A);
    printf("R2 = %.5lf\n",R2);
    }
    return 0;
}
