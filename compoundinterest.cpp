//program to calculate Compound Interest
#include <stdio.h>
#include <math.h>
int main()
{
    float p,t,r,c;
    printf("enter principal amount: ");
    scanf("%f",&p);
    printf("enter time in years: ");
    scanf("%f",&t);
    printf("enter rate of interest: ");
    scanf("%f",&r);
    c=p+(pow((1+(r/100)),t));
    printf("the compound interest is: %.2f",c);
}
