#include<stdio.h>
int fac(int A,int f)
{
    while(A!=1)
    {
        f=f*A;
        return fac(A-1,f);
    }
    return f;
}
void main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("FACTORIAL : %d",fac(N,1));
}