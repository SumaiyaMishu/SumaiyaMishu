/*
Using the following table, write a program that reads a code and the amount of an
item. After, print the value to pay. This is a very simple program with the only
intention of practice of selection commands.

CODE     SPECIFICATION        PRICE
1        Cachorro Quente      R$ 4.00
2        X-Salada             R$ 4.50
3        X-Bacon              R$ 5.00
4        Torrada simples      R$ 2.00
5        Refrigerante         R$ 1.50

*/
#include<stdio.h>   // header file
int main()    //main function
{
    int a,b;    // declaring integer variables
    // taking input
    scanf("%d %d", &a,&b);
    // declaring double datatype variables
    double x,y;
    //conditions
    if (a==1) {x=4.00;}
    else if (a==2) {x=4.50;}
    else if (a==3) {x=5.00;}
    else if (a==4) {x=2.00;}
    else if (a==5) {x=1.50;}

    //calculating the value according to the conditions
    y=x*b;
    printf("Total: R$ %.2lf\n",y);   // result

    return 0;
}
