#include<stdio.h>
int MAX(int *P,int *Q)
{
    if(*P >= *Q)
    {
        return *P;
    }else if(*Q > *P)
    {
        return *Q;
    }
}
void main()
{
    int A,B;
    printf("Enter the first value\n");
    scanf("%d",&A);
    printf("Enter the second number\n");
    scanf("%d",&B);
    printf("Max of %d and %d is %d",A,B,MAX(&A,&B));
}