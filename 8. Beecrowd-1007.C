/* Read four integer values named A, B, C and D. Calculate
and print the difference of product A and B by the product
of C and D (A * B - C * D).

*/

#include<stdio.h>  // header
int main()  //main function
{
    int A,B,C,D,X;  //variables
    scanf("%d %d %d %d",&A, &B, &C, &D);  //inputs
    X= (A*B - C*D);  // calculation
    printf("DIFERENCA = %d\n",X);  //result
    return 0;
}
