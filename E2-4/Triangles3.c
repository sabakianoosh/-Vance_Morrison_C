#include <stdio.h>

int main()
{
    int i,j,a,k;
    printf("enter the base: ");
    scanf("%d",&a);
    for (i=0;i<=a;i++)
    {   
       for ( k=a-1-i;k>=0;k--)
       {
           printf(" ");
       }
        for(j=0;j<=i;j++)
        {  
            printf("*");
        }
        printf("\n");
    }
}