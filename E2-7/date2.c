#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool leapyear( int year)
{
    return (year%400==0) || (year%4==0 && year%100!=0);
}


int main()
{int y,m,d,i;
int w1[12],w2[12];
w1[0]=w1[2]=w1[4]=w1[6]=w1[7]=w1[9]=w1[11]=31;
w2[0]=w2[2]=w2[4]=w2[6]=w2[7]=w2[9]=w2[11]=31;
w1[1]=28;
w2[1]=29;
w1[3]=w1[5]=w1[8]=w1[10]=30;
w2[3]=w2[5]=w2[8]=w2[10]=30;
    printf("enter year month and day: ");
    scanf("%ld %d %d",&y,&m,&d);
    int sum=0;
    for (i=0;i<m-1;i++)
    {
        if (leapyear(y)==true)
        {
            sum+=w2[i];
        }
        else {
            sum+=w1[i];
        }
    }
printf("%ld is days before date \n",sum+d);
int a;
a=(sum+d)%7;
if (a==1)
        printf("Thursday");
if (a==2)
        printf("Friday");
if (a==3)
        printf("Saturday");
if (a==4)
        printf("Sunday");
if (a==5)
        printf("Monday");
if (a==6)
        printf("Tuesday");
if (a==0)
        printf("Wednesday");
}