#include<stdio.h>
void main(){
    int A,sum=0,i;
    printf("Enter the number you want to check for perfect number \n");
    scanf("%d",&A);
    printf("Proper divisors: ");
    for(i=1;i<A;i++)
    {
        if(A%i==0)
        {
            printf("%d,",i);
            sum=sum+i;
        }
    }
    if(A==sum)
    {
        printf(" sum = %d = %d",sum,A);
    }
    else if(A<sum)
    {
        printf(" sum = %d > %d",sum,A);
    }
    else
    {
        printf(" sum = %d < %d",sum,A);
    }
}