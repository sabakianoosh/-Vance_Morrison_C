#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int factorial(int a)
{
         int mul=1;
         int n;
         for (n=1;n<(a+1);n++)
         { mul=mul*n;}
        return mul;
}

float eulers_constant(float precision)
{
    int i=1;
    float sum=1;
while ((1.000/factorial(i)) > precision)
{
    sum+=(1.000/factorial(i));
    i++;
}
return sum;
}

float my_exp(int x, float precision2)
{
    int w=1;
    float sum2=1;
    while ((pow(x,w)/factorial(w)) > precision2)
    {
        sum2+=pow(x,w)/factorial(w);
        w++;
    }
    return sum2;
}


float my_exp2(int x,float precision)
{
    int mul=1;
    int sum=1;
    int i=1;
    while (mul > precision)
    {
        mul=mul*(x/i);
        sum+=mul;
        i++;
    }
    return sum;
}

bool near(int x,int y,float closeness)
{
    if (abs(x)>abs(y))
    {
        if (abs(y)+closeness*abs(x)>=abs(x))
        {
            return true;
        }
  
  }return false;
  if (abs(y)>abs(x))
  {
      if (abs(x)+closeness*abs(y)>=abs(y))
      {
          return true;
      }
  }return false;
}   

float my_sin(int x,float precision)
{double pi = 3.14159265359;
float r;
   r=(x * (pi / 180));
    int sum=0;
    int i=1;
    float w;
    w=((pow(r,(2*i-1)))/factorial(2*i-1))*(pow((-1),(i+1)));
    while(w>precision)
    {
        w=((pow(r,(2*i-1)))/factorial(2*i-1))*(pow((-1),(i+1)));
        sum+=w;
        i++;
    }
    return sum;
}
 
float squar_root(int a, float precision)
{
    int lowerbound=0;
    int upperbound=a;
    float mid;
    while (upperbound-lowerbound>precision)
    {
        mid=(lowerbound+upperbound)/2;
        if (pow(mid,2)==a)
        {return mid;}
        else if(pow(mid,2)>a)
        {upperbound=mid;}
        else if(pow(mid,2)<a)
        {lowerbound=mid;}
    }
    return mid;
}

float root(int a,int b,float precision)
{
    int lowerbound=0;
    int upperbound=a;
    float mid;
    while (upperbound-lowerbound > precision)
    {
        mid =(upperbound + lowerbound)/2 ;
        if (pow(mid,b)==a)
        {
            return mid;
        }
        else if (pow(mid,b)>a)
        {upperbound=mid;}
        else if (pow(mid,b)<a)
        {lowerbound=mid;}
    }
    return mid;
}

float ln(int x, float precision)
{
    int lowerbound=0;
    int upperbound=x;
    float mid;
    while(upperbound-lowerbound > precision)
    {
        mid=(upperbound+lowerbound)/2;
        if(pow(my_exp(x,precision),mid)==x)
        {
            return mid;
        }
        else if(pow(my_exp(x,precision),mid)>x)
        {upperbound=mid;}
        if(pow(my_exp(x,precision),mid)<x)
        {lowerbound=mid;}
    }
    return mid;
}

float main()
{
    eulers_constant(0.001);
    my_exp(2,0.001);
    my_exp2(2,0.001);
    near(1000,999,0.001);
    my_sin(45,0.01);
    squar_root(5 , 0.1);
    root(5,2,0.1);
    ln(2,0.001);
    
}  