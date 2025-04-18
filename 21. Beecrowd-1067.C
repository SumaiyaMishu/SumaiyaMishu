/*
Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X,
each one in a line, including X if is the case.
*/

#include<stdio.h>   //header file
int main()    // main function
{
    int X,Y=1;     //declaring variables
    //taking input from users
    scanf("%d", &X);
    // condition of the program
    while (Y<=X)
    {
        printf("%d\n",Y); // printing the odd values
    Y+= 2; //increasing the value
    }
    return 0;
}
