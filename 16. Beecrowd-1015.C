/*Read the four values corresponding to the x and y axes of two
points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate
the distance between them, showing four decimal places, according to the formula:

Distance = sqrt((x2-x1)^2 + (y2-y1)^2)
*/

#include<stdio.h>  // header file
#include<math.h>  // header file
int main()  // main file
{
    double x1, x2, y1, y2;  // variables
    // taking inputs
    scanf("%lf %lf ", &x1, &y1);
    scanf("%lf %lf ", &x2 ,&y2);
    double a, b, c, d;s  //variables
//calculations
    a= (x2-x1)*(x2-x1);
    b= (y2-y1)*(y2-y1);
    d= a+b;
    c= sqrt(d);
//result
    printf("%.4lf\n",c);
        return 0;
}
