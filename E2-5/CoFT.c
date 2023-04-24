#include <stdio.h>
#include <stdlib.h>

float main()
{   float num;
    printf("enter your degree in celsius degree: ");
    scanf("%f",&num);
    num=(num+32)*9/5;
    printf("%f=fahrenheit",num);
}