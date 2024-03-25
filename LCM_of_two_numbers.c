#include<stdio.h>
void main()
{
    int A,B,i,lcm;
    printf("Enter the first number \n");
    scanf("%d",&A);
    printf("Enter the second number \n");
    scanf("%d",&B);
    for(i=(A*B);i>=B;i--)
    {
        if(i%A==0&&i%B==0)
        {
            lcm=i;
        }
    }
    printf("The LCM of %d and %d is %d",A,B,lcm);
}