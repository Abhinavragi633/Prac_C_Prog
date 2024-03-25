#include<stdio.h>
int Evenodd(int A)
{
    if(A%2==0)
    {
        printf("The number %d is an Even Number",A);
    }
    else
    {
        printf("The number %d is an Odd Number",A);
    }
}
void main()
{
    int N;
    printf("Enter the number which u want to find even or odd: \n");
    scanf("%d",&N);
    Evenodd(N);
}