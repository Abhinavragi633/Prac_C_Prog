#include<stdio.h>
void main()
{
    int B,i;
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
        printf("the %dth elementy of the array is %d \n",i+1,A[i]);
    }
}