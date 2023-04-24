#include <stdio.h>
#include <stdlib.h>

int main()
{int m,n,Q,D,N,P;
printf("your money: ");
scanf("%d",&n);
    m=100-n;
    m=92;
    Q=(m/25);
    D=(m-(Q*25))/10;
    N=((m-(Q*25)-(D*10))/5);
    P=((m)-(Q*25)-(D*10)-(N*5));

    printf("%d=quarters \n %d=dime \n %d=nickel \n %d=pennies",Q,D,N,P);
}