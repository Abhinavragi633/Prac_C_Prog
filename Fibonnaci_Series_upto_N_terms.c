#include<stdio.h>
void main(){
    int N,i,j,x=0,y=1;
    printf("Enter the no of fibonacci numbers \n");
    scanf("%d",&N);
    printf("Fibonnaci Series:");
    for(i=1;i<=N;i++)
    {
        printf(" %d ",x);
        j=x+y;
        x=y;
        y=j;
    }
}