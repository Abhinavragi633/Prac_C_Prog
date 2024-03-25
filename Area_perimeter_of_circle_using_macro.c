#include<stdio.h>
#define pi 3.14
#define sqr(A) A*A
void main(){
    int A; float area,peri;
    printf("Enter the radius of circle \n");
    scanf("%d",&A);
    area=pi*sqr(A);
    peri=2*(pi*A);
    printf("Area of circle with radius %d is %f \n",A,area);
    printf("Perimeter of circle with radius %d is %f",A,peri);
}