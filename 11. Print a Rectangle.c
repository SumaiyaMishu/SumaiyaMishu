#include <stdio.h>
int main()
{
    int H, W, i, j;
    scanf("%d %d", &H, &W);

    if ((1<=H && H<= 10) && (1<=W && W<=10)){
    for (i=0; i<H; i++){
        for (j=0; j<W; j++){
            printf("*");
        }
        printf("\n");
    }
     } else {
    printf("Input must be from 1 to 10.\n");
     }
    return 0;
}
