#include <stdio.h>

int main(int arge, char * argv[])
{
    char saisie;
    scanf("%c", &saisie);
    /* '0'=48, '9'=57, 'A'=65, 'Z'=90, 'a'=97, 'z'=122 */
    if(saisie>=48 & saisie<=57)
    {
        printf("Chiffre \n");
    }
    else if(saisie>=65 & saisie<=90)
    {
        printf("Lettre majuscule \n");
    }
    else if(saisie>=97 & saisie<122)
    {
        printf("Lettre minuscule \n");
    }
    else
    {
        printf("Caractère spécial \n");
    }
}