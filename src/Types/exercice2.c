#include <stdio.h>

int main(int argc, char * argv[])
{
    int x0;
    int x1;
    int x2;
    long int diff=&x1-&x0;
    printf("%p\n%p\n%p\n", &x0, &x1, &x2);
    printf("%ld\n", &x2 - &x1);
    printf("%ld\n", &x1 - &x0);
    printf("%ld\n", &x2 - &x0);
    /* Affiche 1 1 2
}