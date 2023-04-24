#include <stdio.h>
#include <stdlib.h>

int main()
{int b,i,j;
 printf("base: ");
 scanf("%d",&b);

 for (i=0;i<=b;i++)
 {
     for (j=0;j<=i;j++)
     {
         printf("*");
     }
     printf("\n");
 }
}