#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m,n,p,q,i,j,k;
    printf("enter m and n");
    scanf("%d %d",&m,&n);
    printf("enter p and q");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q],result[m][q];
    if(n==p)
    {

    printf("/n enter first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("/n enter second matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            result[i][j]=0;
            for(k=0;k<n;k++)
            result[i][j]=result[i][j]+a[i][k]*b[k][j];
            printf("%d",result[i][j]);
        }
        printf("/n");
     }
    }
    else{
        printf("/n the multiplicatION wont happen");
    }
}