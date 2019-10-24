#include <stdio.h>
#include <math.h>

int main(int argc, char * argv)
{
    for(int j=1; j<=9; j++)
    {
        for(int i=1; i<=9; i++)
        {
            printf("%d ", i*j);
        }
        printf("\n");
    }
}