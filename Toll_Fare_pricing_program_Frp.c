#include<stdio.h>
#include<conio.h>
int TollFare(char A, char B)
{
    int Fare;
    if(A=='c')
    {
        if(B=='s')
        {
            Fare = 55;
        }else if(B=='m')
        {
            Fare = 85;
        }
    }else if(A=='b'||A=='t')
    {
        if(B=='s')
        {
            Fare = 85;
        }else if(B=='m')
        {
            Fare = 125;
        }
    }else if(A=='L')
    {
        if(B=='s')
        {
            Fare = 170;
        }else if(B=='m')
        {
            Fare = 250;
        }
    }else if(A=='T')
    {
        if(B=='s')
        {
            Fare = 250;
        }else if(B=='m')
        {
            Fare = 380;
        }
    }
    return Fare;
}
void main()
{
    char type,trip;
    printf("Enter the type of vehicle\nc for car\nb for bus\nt for truck\nT for containertruck\nL for LCV\n");
    scanf("%c",&type);
    printf("Enter the trip for vehicle\ns for single\nm for multiple trips\n");
    scanf(" %c",&trip);
    printf("FARE : Rs.%d/-",TollFare(type,trip));
}