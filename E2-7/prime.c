#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
bool is_divisible(int a,int b)
{
  return a%b==0;
}

int main()
{int i,n,b;
printf("enter your number: ");
scanf("%d",&n);
for (i=2;i<n;i++)
{
    if (is_divisible(n,i)==true)
  {  printf("%d is not prime",n);
      return;}
}
printf("%d is prime",n);
}