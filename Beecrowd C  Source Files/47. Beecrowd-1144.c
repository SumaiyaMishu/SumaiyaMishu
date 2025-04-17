/*
Write a program that reads an integer N. N * 2 lines must be printed
by this program according to the example below. For numbers with more
than 6 digits, all digits must be printed (no cientific notation allowed).
*/

#include<stdio.h>
int main()
{
    int n,i;   // declearing variables
    scanf("%d",&n);    // scaning inputs
    for (i=1 ; i<=n ; i++){    // "for" loop
        printf("%d %d %d\n", i, i*i, i*i*i);   // showing results
        printf("%d %d %d\n", i, i*i+1, i*i*i+1);
    }
    return 0;
}
