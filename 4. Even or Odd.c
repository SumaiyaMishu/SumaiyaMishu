#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    if ( 1<=N && N <=1000){

    if (N%2 == 0){
        printf("EVEN\n");
    }else {
        printf("ODD\n");
    }
    } else {
    printf("Invalid input! Input must be between 1 to 100.\n");
    }
    return 0;
}
