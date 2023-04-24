#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool leapyear( int year)
{
    return (year%400==0) || (year%4==0 && year%100!=0);
}

int main()
{int y,m;
    printf("enter year and month: ");
    scanf("%ld %d",&y,&m);
    if ( m == 1 || 3 || 5 || 7 || 8 || 10 || 12)
    {
        return 31;
    
    }
    if (m==2)
    {
        if (leapyear(y)==true)
        {return 29;}
        else{return 28;}

    }
    else{return 30;}
}