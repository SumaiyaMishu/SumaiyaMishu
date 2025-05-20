#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if ( (1<=A && A<=1000) && (1<=A && B<=1000) && (1<=A && C<=1000) ){
            if ( A>B && A>C){
        printf("%d\n", A);
        } else if ( B>A && B>C ){
            printf("%d\n", B);
        } else {
                printf("%d\n", C);
        }
    }
    else{
        printf("Invalid input! Inputs must be between 1 to 1000.\n");
    }
        return 0;
}
