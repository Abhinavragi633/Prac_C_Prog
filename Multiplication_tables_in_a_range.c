#include<stdio.h>
void main(){
    int up,low,i,j,pro;
    printf("Enter the lower limit of the range \n");
    scanf("%d",&low);
    printf("Enter the upper limit of the range \n");
    scanf("%d",&up);
    for(i=low+1;i<up;i++)
    {
        printf("The Multiplication Table for %d \n",i);
        for(j=1;j<=10;j++)
        {
            pro=i*j;
            printf(" %d x %d = %d \n",i,j,pro);
        }
    }
}