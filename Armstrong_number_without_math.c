#include<stdio.h>
void main(){
    int A,temp,i,power=1,count=1,sum;
    printf("Enter the number \n");
    scanf("%d",&A);
    temp=A;
    while(A/10!=0)
    {
        count++;
        A=A/10;
    }
    A=temp;
    for(i=1;i<=count;i++)
    {
        power=power*(A%10);
    }
    sum=power;
    while(temp/10!=0)
    {
        power=1;
        temp=temp/10;
        for(i=1;i<=count;i++)
        {
            power=power*(temp%10);
        }
        sum=sum+power;
    }
    if(A==sum)
    {
        printf("%d is an armstrong number",A);
    }    
    else
    {
        printf("%d is not an armstrong number",A);
    }
}