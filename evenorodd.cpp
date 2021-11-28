//program to calculate Compound Interest
#include <stdio.h>
#include <math.h>
int main()
{
	int t,r;
    float p,c;
    printf("enter principal amount: ");
    scanf("%2f",&p);
    printf("enter time in years: ");
    scanf("%d",&t);
    printf("enter rate of interest: ");
    scanf("%d",&r);
    c=p+pow((1+(r/100)),t);
    printf("the compound interest is: %.2f",c);
}
