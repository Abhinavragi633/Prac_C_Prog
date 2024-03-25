#include<stdio.h>
void main(){
    int N,i=1,j=0,x;
    printf("Enter the number upto which you want to find fibonacci series \n");
    scanf("%d",&N);
    printf("Fibonacci Series:");
    while(j<=N)
    {
        printf(" %d ",j);
        x=j+i;
        j=i;
        i=x;
    }
}