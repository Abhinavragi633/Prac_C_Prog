#include<stdio.h>
void main(){
    int A,fac=1,i;
    printf("Enter the number for which you want to find factorial \n");
    scanf("%d",&A);
    for(i=1;i<=A;i++)
    {
        fac=fac*i;
    }
    printf("The factorial of %d is %d",A,fac);
}