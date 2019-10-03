#include <stdio.h>

int main (int argc, char * argv[])
{
    printf("Ecrivez : Bonjour, monde !\n");
    scanf("Bonjour, monde !\n");
    if(getchar()=='\n')
    {
        printf("Je vous ai compris !\n");
    }
    
    /*int e;
    printf("Bonjour, à qui ai-je l'honneur ?\n");
    scanf("Bonjour, je suis %d", &e); 
    getchar();
    printf("Bonjour %d\n",e);*/
    return 0;
   /*Attention à ne pas mettre de \n dans un scanf, 
   il est considéré comme partie intégrante de l'entier autrement*/
}