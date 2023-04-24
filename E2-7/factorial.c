#include <stdio.h>
#include <stdlib.h>


int fac(a)
{
         int mul=1;
         int i;
         for (i=1;i<a+1;i++)
         { mul=mul*i;}
        return mul;
}

int main()
{   int* n,f;
    printf("enter your number: ");
    scanf("%d",&n);
    f = fac(n);
    return f;
}