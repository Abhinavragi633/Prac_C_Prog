#include<stdio.h>
void main(){
    int A,product=1;
    do
    {
        printf("Enter the number \n");
        scanf("%d",&A);
        product=product*A;
    }
    while(A%5!=0);
    printf("The product of the numbers is %d",product);
}