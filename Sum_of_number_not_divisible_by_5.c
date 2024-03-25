#include<stdio.h>
void main(){
    int A,i,sum=0;
    printf("Enter the number \n");
    scanf("%d",&A);
    for (i=1;i<=A;i++)
    {
        if (i%5!=0)
        {
            sum=sum+i;
        }
        
    }
    printf("%d",sum);
}