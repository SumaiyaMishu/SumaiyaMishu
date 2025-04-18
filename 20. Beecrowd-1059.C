/*Write a program that prints all even numbers between 1 and 100,
including them if it is the case.*/

#include<stdio.h>   //header file

int main()    // main function
{
    int a=1;   // integer value
    while(a=a+1,a<101)   //condition
    {
        printf("%d\n",a);  // result
        a++;   //value increase
    }
    return 0;
}
