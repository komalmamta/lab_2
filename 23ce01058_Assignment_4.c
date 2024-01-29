#include<stdio.h>
int main()

{
    int y;
    printf("\nEnter year:", y);
    scanf("\n%d",&y);

    int a = y%4;

    if (a==1 || a==2 || a==3)
    printf("Not a leap year!");

    else printf("Leap year");

    return 0;

}