#include <stdio.h>

int main (int argc, char * argv[])
{
    printf("%d \n", argc);
    /*printf("Bonjour \n.");*/
    return 0;
}
/*argc vaut le nombre de valeurs ("parties") notées après le $, exemple :
$ ./exercice1 
1
$ .exercice1 un 
2
$ .exercice1 trois deux
...