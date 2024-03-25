#include<stdio.h>
void main()
{
    int B,i;
    printf("Enter the length of the array \n");
    scanf("%d",&B);
    int A[B];
    printf("Enter the array \n");
    for(i=0;i<B;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The numbers which ends with zero are");
    for(i=0;i<B;i++)
    {
        if(A[i]%10==0)
        {
            printf(" %d ",A[i]);
        }
    }
    printf("\nThe numbers which are divisible by 3 are");
    for(i=0;i<B;i++)
    {
         if(A[i]%3==0)
        {
            printf(" %d ",A[i]);
        }
    }
}