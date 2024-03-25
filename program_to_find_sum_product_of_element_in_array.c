#include<stdio.h>
void main()
{
    int B,i,sum=0,pro=1;
    printf("Enter the length of array \n");
    scanf("%d",&B);
    int A[B];
    for(i=0;i<B;i++)
    {
        printf("Enter the %dth elementy of the array \n",i+1);
        scanf("%d",&A[i]);
    }
    for(i=0;i<B;i++)
    {
        sum=sum+A[i];
        pro=pro*A[i];
    }
    printf("The sum of the elements is %d \n",sum);
    printf("The product of the elements is %d",pro);
}