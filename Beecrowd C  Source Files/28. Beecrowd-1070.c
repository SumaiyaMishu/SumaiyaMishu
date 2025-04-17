/*Read an integer value X and print the 6 consecutive odd numbers from X, a value
 per line, including X if it is the case.*/
 #include<stdio.h>  //header file
 int main() //main function
 {
     int n,i;  //variable datatype integer
     //taking input
     scanf("%d,",&n);

     //condition
     if (n%2 == 0) n++;

     //loop
     for (i=0; i<6; i++)
     {
         printf("%d\n",n);  //result
         n +=2;
     }
     return 0;
 }
