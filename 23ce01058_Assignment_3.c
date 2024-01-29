#include<stdio.h>
int main()

{
    int days;
    printf("\n Enter number of days:\t",days);
    scanf("\n%d",&days);
    
    int Year = days/365;

    printf("\nYear:\t%d",Year);

    int month = ((days%365)/30);

    printf("\nMonth:\t%d",month);

    int week = (((days%365)%30)/7);

    printf("\nWeek:\t%d",week);

    int day = (((days%365)%30)%7);

    printf("\nDay:\t%d",day);

    

    return 0;
 

}
