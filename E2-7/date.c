#include <stdio.h>
#include <stdlib.h>

int main()
{int m;
    printf("enter month number: ");
    scanf("%d",&m);
    if ( m == 1 || 3 || 5 || 7 || 8 || 10 || 12)
    {
        return 31;
    }
    if (m==2)
    {
      return 28;
    }
    else{return 29;}
}