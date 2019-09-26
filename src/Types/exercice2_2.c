#include <stdio.h>

int main (int argc, char * argv[])
{
    int x0=0;
    int x1=0;
    int x2=0;
    /*printf("%d", argc);*/
    printf("\n %d, %d, %d \n", x0, x1, x2);
    *(&x0 - 4)=8; /*x1 prend la valeur ..*/
    /* *(&x0 - 4)=x2-2; /*x2 prend la valeur .. */
    /*printf("\n %d, %d, %d \n", x0, x1, x2);*/
    printf("\n %d \n", argc);
   
    /*printf("\n %s %s %s", (char)x0, (char)x1, (char)x2);
    
    printf("\n sizeof(char)\n"); 
    printf(sizeof(char));
    printf("\n sizeof(short int)\n"); 
    printf(sizeof(short int));
    printf("\n sizeof(int)\n"); 
    printf(sizeof(int));
    printf("\n sizeof(long int)\n"); printf(sizeof(long int));
    printf("\n sizeof(float)\n"); printf(sizeof(float));
    printf("\n sizeof(double)\n"); printf(sizeof(double));
    printf("\n sizeof(int *)\n"); printf(sizeof(int *));
    printf("\n sizeof(char *)\n"); printf(sizeof(char *));*/
}
/* *(&x1)=x1 -> x1=5 ; *(&x1)=5, ou encore *(&x0+1)=5 */
/* L'étoile de l'adresse d'une case est la case elle-même */
/*sizeof(int)=4 ; car pour stocker un int, il faut 4 char */