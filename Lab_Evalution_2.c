#include<stdio.h>
int Check(int N)
{
    int i,sum=0;
    for(i=1;i<N;i++)
    {
        if(N%i==0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int A,sum;
    printf("Enter the number which you want to compare with sum of proper factor\n");
    scanf("%d",&A);
    sum=Check(A);
    if(sum>A)
    {
        printf("Sum of proper divisors %d > Number %d",sum,A);
    }else if(sum==A)
    {
        printf("Sum of proper divisors %d = Number %d",sum,A);
    }else{
        printf("Sum of proper divisors %d < Number %d",sum,A);
    }
    return 0;
}