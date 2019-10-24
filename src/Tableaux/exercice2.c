#include <stdio.h>
#include <math.h>
#define TAILLE 100000

int crible(int* t)
{
    /*Tous les nombres premiers sont affichés, les autres sont à 0*/
    t[0]=0;
    t[1]=1;
    for(int j=2; j<TAILLE; j++)
    {
        t[j]=1;
    }
    
    for(int i=2; i<=TAILLE; i++)
    {
        /*Si t[i] est à 1, c'est qu'il n'est mutiple d'aucun nombre premier qui le précède, il est donc premier aussi*/
        if (t[i]==1)
        {
            t[i]=i;
            /*Auquel cas, on cherche tous ses multiples inférieurs à TAILLE, auxquels on donne pour valeur de i, nombre premier qui le décompose*/
            for(int j=2; i*j<=TAILLE; j++)
            {
                /*Dans le cas de t[6] par exemple, on lui donne la valeur 2, lorsque l'on cherche les multiples de 2, puis la valeur de 3 lors de la recherche des multiples de 3*/
               /*Ainsi, ce sera toujours le plus grand diviseur qui sera affecté à la fin de la fonction*/
                t[i*j]=i;
            }
        }
    }
    return 0;
}

int decomposition(int *tab, int entier)
{ 
    int div = entier/tab[entier];
    printf("%d",tab[entier]); 
    
    while (div != 1)
    {
        entier=div;
        div=entier/tab[entier]; 
        printf(" * %d ", tab[entier]);
    }
    printf("\n");
    
}



for j 
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
    
    /*Boucle infinie saisissant les valeurs tapées par l'utilisateur*/
    while(1)
    {
        printf("Ecrivez un nombre entre 0 et 100000 exclu\n");
        scanf("%d", &entier);
        /*3 cas de figure ; 1er cas : l'entier est négatif : break*/
        if(entier<0)
        {
            break;
        }
        /*2ème cas de figure : l'entier est trop grand*/
        else if(entier>=TAILLE)
        {
            printf("%d est un nombre trop grand\n", entier);
            continue;
        }
        /*3ème cas de figure : le bon ! Auquel cas, on cherche la décomposition*/
        else
        {
            decomposition(t, entier);
        }
    }
    
    return 0;
}

