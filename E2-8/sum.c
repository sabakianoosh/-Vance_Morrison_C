#include <stdlib.h>
#include <stdio.h>

int compute_sum(n){
   int sum = 0 ;
    int i;
    for (i=1;i<n+1;i++);
        sum = sum + i ;
    return sum ;
}

int main(){
int m;
for(m=9;m>=0;m--){
printf("%d",m);
printf("      ");
printf("%d \n",compute_sum(m)); }
}