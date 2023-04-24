#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    float x1,x2;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    x1 = (-b + pow(pow(b,2)-4*a*c,0.5))/2*a;
    x2 = (-b - pow(pow(b,2)-4*a*c,0.5))/2*a;
    printf("%f=x1 %f=x2",x1,x2);
}