/*
Little John wants to calculate and show the amount of
spent fuel liters on a trip, using a car that does
12 Km/L. For this, he would like you to help him through
a simple program. To perform the calculation, you have
to read spent time (in hours) and the same average
speed (km/h). In this way, you can get distance and then,
calculate how many liters would be needed. Show the value
with three decimal places after the point
*/

#include <stdio.h> //header file
int main()  // main function
{

    double  x, y, z;  //variables

    scanf("%lf %lf", &x, &y);  //taking inputs

    z= (x*y)/12;  //calculations

    printf("%.3lf\n",z);  //result

    return 0;

}
