#include <stdio.h>
int main()
{
    int R;
    float pi=3.14159, x;
    scanf("%d", &R);
    if (1 <= R && R <= 100){
        x = pi*R*R;
        printf("%.2f\n", x);
    }else {
        printf("Invelid input! Input must be between 1 to 100.");
    }
    return 0;
}
