/* Read two integer values, in this case, the variables A and B.
After this, calculate the sum between them and assign it to the
variable SOMA. Write the value of this variable.

*/

#include<stdio.h> // header file
int main()  // main function
{
    int A,B,SOMA;  // declaring variables
    scanf("%d %d",&A,&B);  // // inputs
    SOMA=A+B;  // calculation
    printf("SOMA = %d\n",SOMA);  // outputs

    return 0;
}
