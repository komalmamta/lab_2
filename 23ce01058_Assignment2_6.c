#include<stdio.h>
int main()

{
    int a=0;
    printf("\nEnter a:", a);
    scanf("\n%d",&a);
    if (a<200 & a>100) 
    {int x=a%2;

    if (x==1) printf("True");

    else printf("False");
    }
    else printf("Fuck off");

    return 0;

}