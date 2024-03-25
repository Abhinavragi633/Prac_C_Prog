#include<stdio.h>
void main(){
    int A,B,product;
    printf("Enter the number for which you want to find table \n");
    scanf("%d",&A);
    for(B=1;B<=10;B++)
    {
        product=A*B;
        printf("%d x %d = %d \n",A,B,product);
    }
}