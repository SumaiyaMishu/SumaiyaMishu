#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (1 <= N && N <= 1000){
        printf("Hello! Your number is: %d\n", N);
    }
    else {
        printf("Invalid input! Number must be between 1 to 1000.\n");
    }
    return 0;
}
