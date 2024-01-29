#include<stdio.h>
int main()

{
    int M;

    printf("Enter Meal Cost:",M);
    scanf("%d",&M);

    int x=(M/100)*15;

    printf("Tip Percentage is %d\n",x);

    int y=(M/100)*8;

    printf("Tax percentage is %d\n",y);

    int z= (M+x+y);

    printf("The Total Cost of Bill is %d\n",z);

    return 0;



}