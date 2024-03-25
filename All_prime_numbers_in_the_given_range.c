#include<stdio.h>
void main(){
    int up,low,i,count,j;
    printf("Enter the lower limit of the range \n");
    scanf("%d",&low);
    printf("Enter the upper limit of the range \n");
    scanf("%d",&up);
    printf("The prime numbers present between %d and %d are :",low,up);
    for(i=low+1;i<up;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        {
            printf(" %d ",i);
        }
    }
}