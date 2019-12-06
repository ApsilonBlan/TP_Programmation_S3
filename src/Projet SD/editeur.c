#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "editeur.h"

/*Calcul les coordonnées successives du point au cours de sa trajectoire*/
int calculerCoordonnees(Parametres *param, Coordonnees *coor, Coordonnees *donnees)
{
    float dt=(*param).dt;
    int TAILLE = (*param).tmax/dt;
    
    donnees[0]=(*coor);       
    /*Insertion des coordonnées calculées dans le tableau "donnees"*/
    for(int t=1; t<TAILLE; t++)
    {
        donnees[t].temps=donnees[t-1].temps+dt;
        
        float dx=((*param).sigma*(donnees[t-1].y-donnees[t-1].x))*dt;
        donnees[t].x=donnees[t-1].x+dx;
        
        float dy=(donnees[t-1].x*((*param).rho-donnees[t-1].z)-donnees[t-1].y)*dt;
        donnees[t].y=donnees[t-1].y+dy;
        
        float dz=(donnees[t-1].x*donnees[t-1].y-(*param).beta*donnees[t-1].z)*dt;
        donnees[t].z=donnees[t-1].z+dz;
        
    }

    /*TESTS*/
    /*for(int i=0; i<TAILLE; i++)
    {
        printf("%f %f %f %f", donnees[i].temps, donnees[i].x, donnees[i].y, donnees[i].z);
    }*/
   
    return 0;
}

/*Ecriture sous forme de liste des coordonnées du point*/
int ecriture_donnees(FILE *fichier, Coordonnees *donnees, int TAILLE)
{
    fichier=fopen("lorentz.dat", "w+");
    if (fichier!=NULL)
    {
       for(int i=0; i<TAILLE; i++)
       {
           /*Chaque élément de la liste se présente sous la forme "temps x y z"*/
           fprintf(fichier, "%f %f %f %f\n", donnees[i].temps, donnees[i].x, donnees[i].y, donnees[i].z);
       }
    }
    else
    {
        printf("Impossible d'ouvrir le fichier lorenz.dat");
        return 1;
    }
    
    return 0;

}