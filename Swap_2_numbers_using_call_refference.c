#include<stdio.h>
void Swap(int *P, int *Q)
{
    int Temp;
    Temp = *P;
    *P = *Q;
    *Q = Temp;
    printf("The value at Address %d is %d \n",P,*P);
    printf("The value at Address %d is %d \n",Q,*Q);
}
void main()
{
    int A,B;
    printf("Enter the first value for Address %d\n",&A);
    scanf("%d",&A);
    printf("Enter the second value for Address %d\n",&B);
    scanf("%d",&B);
    Swap(&A,&B);
}