#include<stdio.h>
int CheckPerfect(int A)
{
    int sum=0,j;
    for(j=1;j<A;j++)
    if(A%j==0)
    {
        sum=sum+j;
    }
    if(sum==A)
    {
        printf("%d",A);
    }
}
void main()
{
    int ul,ll,i;
    printf("Enter the lower limit of the range: ");
    scanf("%d",&ll);
    printf("Enter the upper limit of the range: ");
    scanf("%d",&ul);
    printf("The number that are perfect nos are ");
    for(i=ll;i<=ul;i++)
    {
        CheckPerfect(i);
    }
}