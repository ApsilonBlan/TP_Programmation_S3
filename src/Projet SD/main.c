#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "initialisation.h"
#include "editeur.h"


int main(int argc, char* argv[])
{
    Parametres param;
    FILE* fichier=NULL;
    Coordonnees coor;
    
    /*Initialisation des paramètres et de la position initiale du point*/
    initialiserParametres(&param);
    
    initialiserCoordonnees(&coor);
    
    /* Il y a tmax/dt valeurs*/
    int TAILLE = param.tmax/param.dt;
    /*Création du tableau contenant les coordonnées successives*/
    Coordonnees donnees[TAILLE];
    
    /*Création de la liste des+1 coordonnées successives*/
    int ok1=calculerCoordonnees(&param, &coor, donnees);
    
    /*Ecriture des donnees calculées dans un fichier -> fichier "lorenz.dat"*/
    int ok2=ecriture_donnees(fichier, donnees, TAILLE);
    
    return (ok1+ok2);
    
        
}

