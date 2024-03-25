#include<stdio.h>
void main(){
    int N,i,j;
    float sum=0,fac;
    printf("Enter the value for N \n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
       fac=1;
       for(j=1;j<=i;j++)
       {
           fac=fac*j;
       }
       fac=i*(1/fac);
       sum=sum+fac;
    }
    printf("The Sum of the series upto %d terms is %f",N,sum);
}