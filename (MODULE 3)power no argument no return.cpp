//Find power of a number
#include <stdio.h>
#include <math.h>
void power()
{
    int a,b,c;
    printf("enter the base number and exponent(power) number: ");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    printf("%d",c);
}
int main()
{
    power();
}
