#include <stdio.h>
int main()
{
    float C,F;
    scanf("%f", &C);
    if ( -100 <= C && C <= 100){
        F = (9*C) / 5 + 32;
        printf("%.1f\n", F);
    }
    else {
        printf("Invalid input! Input must be from -100 to 100.\n");
    }
    return 0;
}
