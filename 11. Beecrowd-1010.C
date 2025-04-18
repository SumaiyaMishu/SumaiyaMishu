/*
In this problem, the task is to read a code of a product 1, the number
of units of product 1, the price for one unit of product 1, the code
of a product 2, the number of units of product 2 and the price for one
unit of product 2. After this, calculate and show the amount to be paid.

*/
#include<stdio.h>  //header file
int main()  //main function
{
    int p1c, p1u, p2c, p2u;  //integer datatype variables
    double p1p, p2p, x, y, z;  //double datatype variables

    scanf("%d %d %lf ", &p1c, &p1u, &p1p); //input
    scanf("%d %d %lf ", &p2u, &p2u, &p2p); //input
// calculating inputs
    x= p1u*p1p;
    y= p2u*p2p;
    z= x+y;
// result
    printf("VALOR A PAGAR: R$ %.2lf\n",z);

    return 0;
}
