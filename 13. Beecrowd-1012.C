/*
Make a program that reads three floating
point values: A, B and C. Then, calculate and show:

a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.
*/
#include<stdio.h>  //header file
int main()  //main function
{
    double A, B, C, x, y;  //variables
     scanf("%lf %lf %lf",&A, &B, &C);  //inputs

    // calculations

    x= (1.0/2)*A*C;
    printf("TRIANGULO: %.3lf\n", x);  // rectangled triangle

    double pi= 3.14159; //declaring variable and its value
    x= pi*C*C;
    printf("CIRCULO: %.3lf\n", x);  //circle

    x= (1.0/2)*C*(A+B);
    printf("TRAPEZIO: %.3lf\n", x);  //trapezium

    x= B*B;
    printf("QUADRADO: %.3lf\n", x);  //square

    x= A*B;
    printf("RETANGULO: %.3lf\n", x);  //rectangle

    return 0;
}
