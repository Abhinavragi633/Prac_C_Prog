#include<stdio.h>
void main(){
    int A,B,i;
    printf("Enter the lower limit \n");
    scanf("%d",&A);
    printf("Enter the upper limit \n");
    scanf("%d",&B);
    for (i=A+1;i<B;i++)
    {
        printf(" %d ",i);
    }
    
}