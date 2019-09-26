#include <stdio.h>

int main (int argc, char * argv[])
{
    int x[3]={0, 0, 0};
    /*printf("%d", argc);*/
    printf("\n %d, %d, %d \n", x[0], x[1], x[2]);
    *(&x[0] - 4)=8; /*x1 prend la valeur ..*/
    /* *(&x0 - 4)=x2-2; /*x2 prend la valeur .. */
    /*printf("\n %d, %d, %d \n", x0, x1, x2);*/
    printf("\n %p, %p, %p \n", &x, x, &(x[0]));
    printf("\n %d, %d \n", sizeof(x), sizeof(&x));
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