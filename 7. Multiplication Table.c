#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);

    if (1<=N && N<=20){
        for ( i=1 ; i<=10 ; i++){
            int x= N*i;
            printf("%d x %d = %d\n", N, i, x);
        }

    } else {
        printf("Invalid input! Input must be from 1 to 20.\n");
    }
    return 0;
}
