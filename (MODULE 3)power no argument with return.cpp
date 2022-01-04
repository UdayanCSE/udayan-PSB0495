//Find power of a number
#include <stdio.h>
#include <math.h>
int power()
{
    int a,b,c;
    printf("enter the base number and exponent(power) number: ");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    return c;
}
int main()
{
    int z;
    z=power();
    printf("%d",z);
}
