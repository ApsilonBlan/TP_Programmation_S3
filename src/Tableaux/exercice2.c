#include <stdio.h>
#include <math.h>
#define max(a,b) (a>=b?a:b)

#define TAILLE 100000

int crible(int* t)
{
    t[0], t[1] = 0, 1;
    
    for(int i=2; i<sqrt(TAILLE); i++)
    {
        if (t[i]!=0)
        {
            for(int j=2; i*j<TAILLE; j++)
            {
                t[i*j]=max(i,j);
            }
        }
    }
    return 0;
}

int decomposition(int* t, int entier)
{
    int tab[5*1];
    if (t[entier]==entier)
    {
        return &tab;
    }
    int valeur = entier;
    int i =0;
    while (t[valeur]!=valeur)
    {
        tab[i]=t[valeur];
        i++;
        valeur=t[valeur];
    }
    return &tab;
   
}

int main()
{
    int t[TAILLE];
    int rep = crible(t);
    /*Arrêt de main en cas de retour d'erreur de la part de crible*/
    if (rep!=0)
    {
        return rep; 
    }
    int entier;
    while(1)
    {
        printf("Ecrivez un nombre entre 0 et 100000 exclu\n");
        scanf("%d", &entier);
        if(entier<0)
        {
            break;
        }
        else if(entier>=TAILLE)
        {
            printf("%d est un nombre trop grand\n", entier);
            continue;
        }
        else
        {
            int tab=decomposition(t,entier);
            if (tab[0]==1)
            {
                printf("%d est premier, il n'a pas de décomposition", entier);
            }
            else
            {
                printf("La décomposition de %d en facteurs premiers est ", entier);
                for(int i=0; tab[i]!=0; i++)
                {
                    printf("%d x ", tab[i]);
                }
            }
        }
    }
    
    return 0;
}

