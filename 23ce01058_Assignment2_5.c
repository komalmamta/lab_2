#include<stdio.h>
int main()

{
    int a;
    printf("\nEnter a:", a);
    scanf("\n%d",&a);

    int x=a%2;

    if (x==1) printf("It is odd number");

    else printf("It is even number");

    return 0;

}