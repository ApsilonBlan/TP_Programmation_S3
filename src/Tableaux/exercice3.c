#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void trouve_candidat(int *t, int *candidat)
{

    int TAILLE=10;
    int maj=0;
   /*On parcourt une fois toutes les cases du tableau pour trouver un candidat possible*/
    for(int i=0; i<TAILLE; i++)
    {
        /*Si la majorité actuelle est de 0, l'élément devient candidat avec une majorité de 1*/
        if(maj==0)
        {
            *candidat=t[i];
            maj=1;
        }
        /*Si la majorité actuelle est strictement positive*/
        if(maj>0)
        {
            /*Si l'élément courant est égal au candidat courant, on augmente la majorité de 1*/
            if(*candidat==t[i])
            {
               maj+=1; 
            }
            /*Sinon, on diminue la ùmajorité de 1*/
            else
            {
                maj-=1;
            }
        }
    }
}

void verifie_candidat(int *t, int candidat)
{
    int TAILLE=10;
    int nb_apparitions=0;
    for(int i=0; i<TAILLE; i++)
    {
        if(t[i]==candidat)
        {
            nb_apparitions+=1;
        }
    }
    if(nb_apparitions>(TAILLE/2))
    {
        printf("\n%d est le candidat majoritaire\n", candidat);
    }
    else
    {
        printf("\nIl n'y a pas de candidat majoritaire\n");
    }
}

void afficher_tableau(int *t, int taille)
{
    for(int i=0; i<taille; i++)
    {
        printf("%d ", t[i]);
    }
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int TAILLE=10;
    int n=0;
    int candidat;
    /*On demande un entier n>0*/
    printf("Saisissez un entier positif\n");
    scanf("%d", &n);
    
    int tab[TAILLE];
    for(int i=0; i<TAILLE; i++)
    {
        tab[i]=(rand()%n);
    }
    afficher_tableau(tab, TAILLE);
    trouve_candidat(tab, &candidat);
    verifie_candidat(tab, candidat);
}