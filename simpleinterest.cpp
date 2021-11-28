//Calculate simple interest for various parameters specified by the user 
#include <stdio.h>
int main()
{
    float p,t,r,si;
    printf("enter principle amount: ");
    scanf("%f",&p);
    printf("enter time in years: ");
    scanf("%f",&t);
    printf("enter rate of interest: ");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("simple interest is: %.2f",si);
}
