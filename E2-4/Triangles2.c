#include <stdio.h>

int main()
{   int a,i,j;
    char ch;
    printf("enter the base and the character: ");
    scanf("%d %c",&a,&ch);
    for (i=0;i<=a;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}