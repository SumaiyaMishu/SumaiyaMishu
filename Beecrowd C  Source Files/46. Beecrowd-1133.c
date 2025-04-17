/*
Write a program that reads two integer numbers X and Y.
Print all numbers between X and Y which dividing it by
5 the rest is equal to 2 or equal to 3.
*/

#include<stdio.h>
int main ()
{
    int x,y,i,temp;  //declearing variables
    scanf("%d %d", &x, &y);   //taking inputs
    if (x>y)   // condition
    {
        temp=x; x=y; y=temp;
    }
x++;
for (i=x; i<y;i++) {    //loop
    if (i%5 == 2 || i%5 == 3)
        printf("%d\n", i);    // result
}
return 0;
}
