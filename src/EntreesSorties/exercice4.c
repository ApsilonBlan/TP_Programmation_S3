#include <stdio.h>

/*Les 2 morceaux de pogramme suivant font la même chose :
printf("Bonjour.\n");

char * hello="Bonjour";
printf("%s.\n", hello);*/

int main(int argc, char * argv[])
{
    /*printf("%s %s %s\n", argv[0], argv[1], argv[2]);*/
   
    /*printf("%d\n", arg)*/
   
   /*argc = nombre de mots
    boucle pour afficher tout ce qui est tapé:*/
    int i;
    for (i=0; i<argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    
    for (i=argc+1; i<10; i++)
    {
        printf("%s\n", argv[i]);
    }
    
    printf("\n%s\n", argv[80]); /*"Segmentation_fault (core dumped)" ou "(null)"*/
    
}

/*Taper "echo $LANG" dans le terminal entraine l'affichage de "en_US.UTF-8"*/