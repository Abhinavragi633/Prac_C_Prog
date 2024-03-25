#include<stdio.h>
#include<math.h>
/* Here math.h is used to enable pow function which calculates power */
void main()
{
    int A,T,B,n=1;
    printf("Enter The Number you want to check for armstrong number \n");
    scanf("%d",&A);
    T=A;
    while(T/10!=0)
    {
        n++;
        T=T/10;
    }
    T=A;
    B=pow(T%10,n);
    while(T/10!=0)
    {
        T=T/10;
        B=B+pow(T%10,n);
    }
    if(A==B)
    {
        printf("%d is an armstrong number",A);
    }
    else
    {
        printf("%d is not an armstrong number",A);
    }
}    
