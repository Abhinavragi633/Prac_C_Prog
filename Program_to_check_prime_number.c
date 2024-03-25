#include<stdio.h>
void main(){
    int A,i,count=0;
    printf("Enter the number you want to check for prime number \n");
    scanf("%d",&A);
    for(i=1;i<=A;i++)
    {
        if(A%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("The number %d is a prime number",A);
    }
    else if(count==1)
    {
        printf("The number %d is neither prime nor composite number",A);
    }
    else
    {
        printf("The number %d is a composite number",A);
    }
}
