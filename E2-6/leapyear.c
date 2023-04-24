#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    printf("year: ");
    scanf("%d",&y);
    if(y%400==0)
    {
        printf("%d is leap year",y);
    }
    else if((y%4==0) && (y%100!=0))
    {
        printf("%d is leap year",y);
    }
    else
    {
        printf("%d is not leap year",y);
    }
}