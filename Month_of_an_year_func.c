#include<stdio.h>
void Month_of_year(int A)
{
    switch (A)
    {
    case 1:
        printf("The Month %d of the year is January",A);
        break;
    case 2:
        printf("The Month %d of the year is February",A);
        break;    
    case 3:
        printf("The Month %d of the year is March",A);
        break;
    case 4:
        printf("The Month %d of the year is April",A);
        break;
    case 5:
        printf("The Month %d of the year is May",A);
        break;
    case 6:
        printf("The Month %d of the year is June",A);
        break;
    case 7:
        printf("The Month %d of the year is July",A);
        break;
    case 8:
        printf("The Month %d of the year is August",A);
        break;
    case 9:
        printf("The Month %d of the year is September",A);
        break;
    case 10:
        printf("The Month %d of the year is October",A);
        break;
    case 11:
        printf("The Month %d of the year is November",A);
        break;
    case 12:
        printf("The Month %d of the year is December",A);
        break;
    default:
        break;
    }
}
void main()
{
    int N;
    printf("Enter the number of month:\n");
    scanf("%d",&N);
    Month_of_year(N);
}