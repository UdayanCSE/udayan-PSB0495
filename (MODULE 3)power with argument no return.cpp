//Find power of a number
#include <stdio.h>
#include <math.h>
int power(int a,int b)
{
    int c;
    c=pow(a,b);
    printf("%d",c);
}
int main()
{
    int x,y;
    printf("enter the base number and exponent(power) number: ");
    scanf("%d %d",&x,&y);
    power(x,y);
}
