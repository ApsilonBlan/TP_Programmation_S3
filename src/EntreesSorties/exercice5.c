#include <stdio.h>

int main (int argc, char * argv[])
{
    char c;
    printf("Ecrivez : Bonjour, monde !\n");
    scanf("%c", &c);
    /* exemple : scanf("c", 100) lit un char et le stocke à l'adresse 100*/
    c=getchar(); 
    /*getchar lit ce que l'utilisateur tape après le lancement du programme, caractère par caractère*/
    /*getchar et scanf ne peuvent lire QUE ce qui est avant un \n*/
    /*C'est la faute du terminal qui lit ce que l'utilisateur tape ligne par ligne*/
    /*printf("Je vous ai compris !\n");*/
    printf("\n %c \n", c);
    return 0;
}