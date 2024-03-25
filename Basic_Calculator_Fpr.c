#include<stdio.h>
int Calculate(int A,char oper,int B)
{
    int result;
    switch(oper)
    {
        case '+':
            result = A+B;
            break;
        case '-':
            result = A-B;
            break;
        case '*':
            result = A*B;
            break;
        case '/':
            result = A/B;
            break;
        default:
            printf("Invalid Operator Entered.....!!!");
    }
    return result;
}
void main()
{
    int X,Y; char Z;
    printf("Enter the Expression that need to be evaluated:\n");
    scanf("%d %s %d",&X,&Z,&Y);
    printf("= %d",Calculate(X,Z,Y));
}