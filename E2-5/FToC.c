#include <stdio.h>
#include <stdlib.h>

float main()
{   
    float num2;
    printf("enter your number in degrees fahrenheit: ");
    scanf("%f",&num2);
    num2= (num2-32)*5/9;
    printf("%f=Celsius",num2);
}


