#include<stdio.h>
int fact()
{
    printf("Enter the number which you want to find factorial:\n");
    int N,i,fac=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        fac *= i;
    }
    return fac;
}
void main()
{
    int A;
    A=fact();
    printf("The factorial is %d",A);
}