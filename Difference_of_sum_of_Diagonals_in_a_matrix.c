#include<stdio.h>
void main()
{
    int A,dia1=0,dia2=0;
    printf("Enter the order of square matrix\n");
    scanf("%d",&A);
    int B[A][A],i,j;
    for(i=0;i<A;i++)
    {
        for(j=0;j<A;j++)
        {
            printf("Enter the value for A[%d][%d] element of matrix\n",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<A;i++)
    {
        for(j=0;j<A;j++)
        {
            if(i==j)
            {
                dia1+=B[i][j];
            }
        }
    }
    for(i=0;i<A;i++)
    {
        for(j=0;j<A;j++)
        {
            if(i+j==(A-1))
            {
                dia2+=B[i][j];
            }
        }
    }
    if(dia1<=dia2)
    {
        A=dia1;
        dia1=dia2;
        dia2=A;
    }
    A=dia1-dia2;
    printf("The absolute difference of the sum of diagonals is %d",A);
}