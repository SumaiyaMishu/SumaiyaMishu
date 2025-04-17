/*Make a program that reads 3 integer values and present the
greatest one followed by the message "eh o maior".
Use the following formula:

MaiorAB = (a + b + abs (a - b)) / 2

*/
#include<stdlib.h>  // header file
#include<stdio.h>  //header file
int main()  //main function
{
    int a, b, c, x, y;  // variable
    scanf("%d %d %d ", &a,&b,&c);  // taking inputs
//calculation
    x= (a+b+(abs(a-b)))/2;
    y= (x+c+(abs(x-c)))/2;
//result
    printf("%d eh o maior\n",y);

    return 0;
}
