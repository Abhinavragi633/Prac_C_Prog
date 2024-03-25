#include<stdio.h>
void main(){
    int A,sum=0,i;
    printf("Enter the number you want to check for perfect number \n");
    scanf("%d",&A);
    for(i=1;i<A;i++)
    {
        if(A%i==0)
        {
            sum=sum+i;
        }
    }
    if(A==sum)
    {
        printf("The number %d is a perfect number",A);
    }
    else
    {
        printf("The number %d is not a perfect number",A);
    }
}