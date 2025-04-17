/*
A gas station wants to determine which of their products is
the preference of their customers. Write a program to read
the type of fuel supplied (coded as follows: 1. Alcohol
2. Gasoline 3. Diesel 4. End).If you enter an invalid
code (outside the range of 1 to 4) a new code must be requested.
The program will end when the inserted code is the number 4.
*/

#include<stdio.h>
int main()
{
    int x,a=0,b=0,c=0;  //declaring variables
    x=1;
   while (x!=4)  //loop with condition
   {
        scanf("%d",&x);  //taking input
        if (x == 1)   //condition
        {
            a++;
        } else if (x == 2)
        {
            b++;
        } else if (x== 3)
        {
            c++;
        }
   }
   // Print the result
   printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,b,c);

    return 0;
}
