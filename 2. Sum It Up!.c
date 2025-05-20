#include<stdio.h>
int main()
{
    int A,B,X;
    scanf("%d %d", &A, &B);
    if (1<=A && A<=1000 && 1<=B && B<=1000){
        X = A+B;
        printf("%d\n", X);
    }
    else{
        printf("Invalid input! Input must be 1 to 1000.\n");
    }
    return 0;
}
