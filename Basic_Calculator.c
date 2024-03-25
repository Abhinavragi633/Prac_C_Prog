#include<stdio.h>
void main(){
    float A,B,result;
    char op;
    printf("Enter the Equation \n");
    scanf("%f%c%f",&A,&op,&B);
    if (op=='+')
    {
       result=A+B;
       printf(" = %f",result); 
    }
    else if (op=='-')
    {
        result=A-B;
       printf(" = %f",result);
    }
    else if (op=='*')
    {
        result=A*B;
       printf(" = %f",result);
    }
    else if (op=='/')
    {
        result=A/B;
       printf(" = %f",result);
    }
    else
    {
       printf("Enter a valid operator next time");
    }
}