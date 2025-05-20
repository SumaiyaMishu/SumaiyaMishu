#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    if ( 1 <= N && N <= 1000 ){
        if ( N%3 == 0 && N%5 == 0){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        printf("Input must be between 1 to 1000.\n");
    }
    return 0;
}
