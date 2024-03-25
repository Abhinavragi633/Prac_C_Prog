#include<stdio.h>
void main()
{
    int sum=0,A=9,n,i;
    printf("Enter the number of terms of series need to be summed \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {sum=sum+A;
    A=A*10;
    A=A+9;
    }
    printf("%d",sum);
}