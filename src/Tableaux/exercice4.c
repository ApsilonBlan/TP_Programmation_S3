#include <stdio.h>

void afficher_tableau(unsigned char *tab, int nb_cases)
{
    for(int i=0; i<nb_cases; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    unsigned char t1[10]={56, 125, 234, 12, 124, 0},
    t2[10]={34, 131, 20, 244, 200, 0},
    t3[10];
    
    afficher_tableau(&t1, sizeof(t1));
    afficher_tableau(&t2, sizeof(t2));
    afficher_tableau(&t3, sizeof(t3));
}

#include <limits.h>

unsigned int t1[3]={UINT_MAX, 2, 0};
unsigned int t2[3]={1, 0, 0};
unsigned int t3[3];
addition_tableau((unsigned char*)t1, (unsigned char*)t2, (unsigned char*)t3, 3*sizeof(int));
affiche_int(t3);

addition tableau :
    for(int i=0; i<...;i++)
    {
        additionneur
    }
    
additionneur :
    int c = a+b+retenue
    *resultat=c%256;
    *retenue=c/256;