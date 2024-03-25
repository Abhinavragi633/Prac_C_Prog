#include<stdio.h>
int MAX(int A[],int size)
{
    int i,max=A[0];
    for(i=1;i<size;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;
}
int main()
{
    int size,i;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("MAX ELE: %d",MAX(arr,size));
}