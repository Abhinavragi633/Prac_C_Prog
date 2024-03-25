#include<stdio.h>
int large(int A,int B,int C)
{
    int lar;
    if(A>=B&&A>=C)
    {
        lar = A;
    }
    else if(B>=A&&B>=C)
    {
        lar = B;
    }
    else
    {
        lar = C;
    }
    return lar;
}
void main()
{
    int X,Y,Z;
    printf("Enter the three numbers in the format xx xx xx \n");
    scanf("%d %d %d",&X,&Y,&Z);
    printf("The Largest Number among %d, %d and %d is %d",X,Y,Z,large(X,Y,Z));
}