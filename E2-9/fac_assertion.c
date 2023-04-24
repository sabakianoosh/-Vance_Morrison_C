#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

long long int fac(a)
{   assert (a>0);
         int mul=1;
         int i;
         for (i=1;i<a+1;i++)
         { mul=mul*i;}
         assert(mul>0);
        return mul;
}

int main()
{   int* n,f;
    printf("enter your number: ");
    scanf("%d",&n);
    f = fac(n);
    printf("%lld",f);
}