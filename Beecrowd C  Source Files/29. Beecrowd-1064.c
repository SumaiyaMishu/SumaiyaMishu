/*Read 6 values that can be floating point numbers. After, print how many of them
 were positive. In the next line, print the average of all positive values typed,
 with one digit after the decimal point.*/
 #include<stdio.h>   //library function
 int main()     //main function
 {
     float a, s=0;    //declaring float data type variables
     int i, p=0;   //declaring integer data type variables
     for (i=1; i<=6; i++){   // for loop
        scanf("%f", &a);   // taking input from user
        if (a>0){   //condition for which the input is true
            p++;
            s += a;
        }
     }
     printf("%d valores positivos\n%.1f\n", p, s/p);  // printing output

     return 0;
 }
