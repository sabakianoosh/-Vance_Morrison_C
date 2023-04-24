#include <stdlib.h>
#include <stdio.h>
int i,j,a;
int main()
{   printf ("enter the base: ");
    scanf ("%d",&a);
    for ( i=0;i<a;i++)
    {
        if (i%2==1)
        {
            for (j=0;j<i;j++)
            printf("%%");
            printf("\n");
        }
        if (i%2==0)
        {
            for(j=0;j<i;j++)
            printf("*");
            printf("\n");
        }
    }
}