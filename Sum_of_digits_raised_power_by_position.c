#include<stdio.h>
void main(){
    int power,A,pos,i,sum=0,count=0,temp;
    printf("Enter the number for which you want to find the of digits raised to the power based on their position \n");
    scanf("%d",&A);
    temp=A;
    while(A!=0)
    {
        count=count+1;
        A=A/10;
    }
    A=temp;
    for(pos=1;pos<=count;pos++)
    {
        power=1;
        for(i=1;i<=pos;i++)
        {
            power=power*(A%10);
        }
        sum=sum+power;
        A=A/10;
    }
    printf("The sum of the digits raised to power based on position is %d",sum);
}