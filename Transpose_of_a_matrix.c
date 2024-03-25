#include<stdio.h>
void main()
{
    int N;
    printf("Enter the order of the square matrix\n");
    scanf("%d",&N);
    int A[N][N],i,j,B[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Enter the element A[%d][%d] of the matrix \n",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    printf("The operated Matrix is \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
}