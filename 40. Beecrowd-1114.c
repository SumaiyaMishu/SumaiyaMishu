/*
Write a program that keep reading a password until it is valid.
For each wrong password read, write the message "Senha inválida".
 When the password is typed correctly print the message "Acesso Permitido"
  and finished the program. The correct password is the number 2002.
*/

#include<stdio.h>

int main()
{
    int pass=0;

    while (pass!=2002)
    {
        scanf("%d",&pass);   //taking input
        if (pass!=2002)    //condition
        {
            printf("Senha Invalida\n");   //result
        }
    }
    printf("Acesso Permitido\n");   // result

    return 0;
}
