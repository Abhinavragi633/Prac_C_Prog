#include<stdio.h>
int Sum(int *p, int *q)
{
    int s = *p + *q ;
    return s;
}
void main()
{
    int A,B;
    printf("Enter the first value\n");
    scanf("%d",&A);
    printf("Enter the second number\n");
    scanf("%d",&B);
    printf("Sum of %d and %d is %d",A,B,Sum(&A,&B));
}