#include <stdio.h>

int main (int argc, char * argv[])
{
    char * ligne;
    char c;
    int i;
    while(1)
    {
        scanf("%m[^\n]%c", &ligne, &c);
        for (i=0; ligne[i]!=0; i++)
        {
            if((ligne[i]>='a')&&(ligne[i]<='z'))
            {
                ligne[i]='a'+((ligne[i]-'a'+13)%26);
            }
            if((ligne[i]>='A')&&(ligne[i]<='Z'))
            {
                ligne[i]='A'+((ligne[i]-'A'+13)%26);
            }
        
        }
        printf("%s\n", ligne);
    }
    return 0;
}