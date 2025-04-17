/* Read 2 variables, named A and B and make the sum of these
two variables, assigning its result to the variable X. Print
X as shown below. Print endline after the result otherwise
you will get “Presentation Error”.

*/

#include<stdio.h>  // header file

int main()   // main function
{
    int X,A,B;   // declaring input
    scanf("%d %d",&A,&B);  //taking input from user
    X = A+B;  // calculating the inputs

    printf("X = %d\n",X);  // printing output
    return 0;
}
