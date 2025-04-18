/*
Read two integer values (A and B). After, the program should print the message
"Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples),
corresponding to the read values.
*/

#include<stdio.h>   //header file
int main()    //main function
{
    int a,b;    //integer type variable
    //taking inputs
    scanf("%d %d", &a, &b);

    if ( b%a==0 || a%b==0 ) { printf("Sao Multiplos\n"); }  //if condition is true

    else { printf("Nao sao Multiplos\n"); }   //if condition is false

    return 0;
}
