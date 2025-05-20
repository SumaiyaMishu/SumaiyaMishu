#include <stdio.h>
int main ()
{
    int N, i, x=0;
    int marbles[100];
    scanf("%d", &N);
    for (i=0; i<N; i++){
        scanf("%d", &marbles[i]);
        if (marbles[i] % 2 == 0){
            x++;
        }
    }
    printf("%d\n", x);
    return 0;
}
