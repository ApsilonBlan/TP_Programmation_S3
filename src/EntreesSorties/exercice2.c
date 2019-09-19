#include <stdio.h>

int main (int arge, char * argv[])
{
    /*char c;
    for(c='0'; c<='9'; c=c+1)
    {
        printf("\n %c -> %d \n", c, c);
    }
    */
   char a='a';
   char z='z';
   char A='A';
   char Z='Z';
   printf("\n %c -> %d \n", a, a);
   printf("\n %c -> %d \n", z, z);
   printf("\n %c -> %d \n", 'z'-'a', z-a);    
   printf("\n %c -> %d \n", A, A);
   printf("\n %c -> %d \n", Z, Z);
   printf("\n %c -> %d \n", 'Z'-'A', Z-A);    
}
