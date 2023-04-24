#include <stdio.h>
#include <stdlib.h>

int main()
{int i;
int l[5];
l[0]=-100;
l[1]=-1;
l[2]=0;
l[3]=1;
l[4]=1000;
for (i=0;i<5;i++)
{
    if (l[i]>=0)
    {
        printf("\n  %d ",l[i]);
    }
    if (l[i]<0)
    {
        printf(" \n %d",-l[i]);
    }
}
}   
