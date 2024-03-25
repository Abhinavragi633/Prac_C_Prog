#include<stdio.h>
int SecSum(int A,int B)
{
    int sum;
    sum=A+B;
    return sum;
}
int main()
{
    int n,m,i;
    printf("Enter the number of elements for array 1 and 2\n");
	scanf("%d %d",&n,&m);
    int A[n],B[m];
    printf("Enter the elements of Array 1\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the elements of Array 2\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }
    printf("The sum of second ele in A and B is %d",SecSum(A[1],B[1]));
}