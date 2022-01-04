//Find power of a number
#include <stdio.h>
#include <math.h>
int power(int a,int b)
{
    int c;
    c=pow(a,b);
    return c;
}
int main()
{
    int x,y,z;
    printf("enter the base number and exponent(power) number: ");
    scanf("%d %d",&x,&y);
    z=power(x,y);
    printf("%d",z);
}
