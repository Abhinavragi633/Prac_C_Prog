#include<stdio.h>
#include<math.h>
void main(){
    int A,last,first,dig=1,var;
    printf("Enter the number you want to swap first and last digits \n");
    scanf("%d",&A);
    last=A%10;
    var=A;
    while(var/10!=0)
    {
        dig=dig+1;
        var=var/10;
    }
    var=A;
    while(var/10!=0)
    {
        var=var/10;
    }
    first=var;
    A=A-last+first;
    var=last-first;
    var=var*(pow(10,dig-1));
    A=A+var;
    printf("The number formed after swapping first and last digits is %d",A);
}