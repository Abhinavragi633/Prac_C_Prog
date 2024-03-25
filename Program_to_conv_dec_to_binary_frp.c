#include<stdio.h>
#include<math.h>
int DecimalToBinary(int N)
{
    int R,bin=0,temp=1;
    while(N!=0)
    {
        R=N%2;
        bin = bin + (R*temp);
        temp *= 10;
        N /= 2;
    }
    return bin;
}
int main()
{
    int A;
    printf("Enter the number which needs to be converted into binary\n");
    scanf("%d",&A);

    printf("The binary form of %d is %d",A,DecimalToBinary(A));
}