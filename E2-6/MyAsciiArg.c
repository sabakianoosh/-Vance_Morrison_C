#include <stdlib.h>
#include <stdio.h>
  
int my_asci(int b)
{int i,k,w;
     printf("\n%*c^",(b/2)+10,' ');
    for ( i=3;i<=b;i+=2)
    {
        printf("\n%*c",10+(b/2)-(i/2),' ');
        for (k=0;k<i/2;k++)
        {
            printf("/");
        }
        printf("|");
        for (w=0;w<i/2;w++)
        {
            printf("\\");
        }
    }
    return 0;
}
int main()
{int m;
    for (m=1;m<+9;m+=2)
    {
        my_asci(m);
    }
}