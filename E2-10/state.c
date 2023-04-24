#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[20];
    int i=0;
    int a=1;
    while (a!=-1)
    {
        printf("number: ");
        scanf("%d",&a);
        if(a!=-1){
        list[i]=a;
        i++;}
    }
    int min,max,p,l;
    min=list[0];
    for (p=0;p<i;p++){
        if(list[p]<min){
            min=list[p];}
    }
    max=list[0];
    for(l=0;l<i;l++)
    {
        if(list[l]>max){
            max=list[l];
        }
    }
   
    int sum = 0;int k;
    for(k=0;k<i;k++){
        sum+=list[k];}
    
    float n;
    n=(float)sum/i;


   list[i]='\0';
   printf("numbers: ");
   int j = 0;
   for (j=0;j<i;j++)
    {printf("%d,",list[j]);}
    printf("\n%f is the average of numbers.",n);
    printf("\n%d= min",min);
    printf("\n%d = max",max);
  
}