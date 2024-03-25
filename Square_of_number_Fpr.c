#include<stdio.h>
int square(int A)
{
    A = A*A;
    return A;
}
void main()
{
    int N;
    printf("Enter the number for which you want to find square: \n");
    scanf("%d",&N);
    printf("The square of %d is %d",N,square(N));
}