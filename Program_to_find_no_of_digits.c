#include<stdio.h>
void main(){
    int A,T,count=1;
    printf("Enter the number \n");
    scanf("%d",&A);
    T=A;
    while(A/10!=0)
    {
        A=A/10;
        count=count+1;
    }
    printf("The no of digits in %d is %d",T,count);
}