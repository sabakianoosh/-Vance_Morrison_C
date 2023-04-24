#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int a,b,p;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    p=pow(a,b);
    printf("%d",p);
}