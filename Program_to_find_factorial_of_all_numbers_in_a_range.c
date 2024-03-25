#include<stdio.h>
void main(){
    int A,B,i,j,fac;
    printf("Enter the lower limit of the range \n");
    scanf("%d",&A);
    printf("Enter the upper limit of the range \n");
    scanf("%d",&B);
    for(i=A+1;i<B;i++)
    {
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac=fac*j;
        }
        printf("The factorial for %d is %d \n",i,fac);
    }
}