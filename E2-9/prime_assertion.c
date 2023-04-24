#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>

bool is_divisible(int a,int b)
{   assert (b!=0);
  return a%b==0;
}

int main()
{int i,n,b;
printf("enter your number: ");
scanf("%d",&n);
assert(n>0);
for (i=2;i<n;i++)
{
    if (is_divisible(n,i)==true)
  {  printf("%d is not prime",n);
      return;}
}
printf("%d is prime",n);
}