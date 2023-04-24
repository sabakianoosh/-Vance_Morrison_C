#include <stdio.h>
#include <stdlib.h>

int cone()
{
    printf("\n    ^");
    printf("\n   /|\\");
    printf("\n  //|\\\\");
    printf("\n ///|\\\\\\");
}

int body()
{
    int i=1;
    for (;i<5;i++)
    {
        printf("\n+*******+");
    }
}

int main()
{
    cone();
    printf("\n+-------+");
    body();
    printf("\n+-------+");
    body();
    printf("\n+-------+");
    cone();
}