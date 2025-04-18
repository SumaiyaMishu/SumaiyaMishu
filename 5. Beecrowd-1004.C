/* Read two integer values. After this, calculate the product
between them and store the result in a variable named PROD.
Print the result like the example below. Do not forget to
print the end of line after the result, otherwise you will
receive “Presentation Error”.

*/

#include<stdio.h>  // header file
int main()  //main function
{
    int a,b,PROD;  //declaring variables
    scanf("%d %d",&a, &b);  //taking inputs
    PROD=a*b;  //calculation
    printf("PROD = %d\n",PROD);  //output
    return 0;
}
