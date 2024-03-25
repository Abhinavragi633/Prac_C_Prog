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
    printf("The reverse order of array is");
    for(i=B-1;i>=0;i--)
    {
        printf(" %d ",A[i]);
    }
}