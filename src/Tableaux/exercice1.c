#include <stdio.h>
#include <math.h>

#define TAILLE 100000




int main()
{
    int t[TAILLE];
    int i=0;
    int rep = crible(t);
    if (rep!=0)
    {
        return rep; /*Arrêt de main en cas de retour d'erreur de la part de crible*/
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
            if(t[entier]==0)
            {
                printf("%d n'est pas premier\n", entier);
            }
            else
            {
                printf("%d est premier\n", entier);
            }
        }
    }
    
    return 0;
}

