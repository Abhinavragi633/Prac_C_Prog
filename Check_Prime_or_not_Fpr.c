#include<stdio.h>
int CheckPrime(int N)
{
    int count=0,i=N;
    while(i!=1)
    {
        if(N%i==0)
        {
            count += 1 ;
        }
        i -= 1;
    }
    if(count==1)
    {
        i = 1;
    }else if(count>1)
    {
        i = 2;
    }else
    {
        i = 3;
    }
    return i;
}
int main()
{
    int A;
    printf("Enter the number which needed to be checked for prime\n");
    scanf("%d",&A);
    if(CheckPrime(A)==1)
    {
        printf("The number %d is a Prime number",A);
    }
    else if(CheckPrime(A)==2)
    {
        printf("The number %d is a Composite number",A);
    }
    else if(CheckPrime(A)==3)
    {
        printf("The number %d is a Neither Prime nor Composite",A);
    }
}