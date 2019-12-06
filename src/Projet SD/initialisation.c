#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "initialisation.h"

/*Initialisation des paramètres*/
void initialiserParametres(Parametres* param)
{
    printf("Quel est le paramètre sigma ?\n");
    scanf("%f", &(*param).sigma);
    printf("Quel est le paramètre rho ?\n");
    scanf("%f", &(*param).rho);
    printf("Quel est le paramètre beta ?\n");
    scanf("%f", &(*param).beta);
    printf("Quel est le paramètre dt ?\n");
    scanf("%f", &(*param).dt);    
    printf("Quel est le paramètre tmax ?\n");
    scanf("%f", &(*param).tmax);
    

    /*TEST*/
    /*printf("%f, %f, %f, %f, %f\n", (*param).sigma, (*param).rho, (*param).beta, (*param).dt, (*param).tmax);*/   
}

/*Saisie des coordonnées initiales du point*/
void initialiserCoordonnees(Coordonnees *coor)
{
        
    printf("Quelle est la position initiale sur l'axe des x ?\n");
    scanf("%f", &(*coor).x);
    printf("Quelle est la position initiale sur l'axe des y ?\n");
    scanf("%f", &(*coor).y);
    printf("Quelle est la position initiale sur l'axe des x ?\n");
    scanf("%f", &(*coor).z);
    (*coor).temps=0;
        
    /*TEST*/
   /*printf("%f, %f, %f, %f", (*coor).temps, (*coor).x, (*coor).y, (*coor).z);*/
}
