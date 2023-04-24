#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int a,i;
    int sum=0;
    printf("enter your number: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        sum+=pow(i,2);
    }
    printf("%d is the average of squares from 0 to %d",sum,a);
}