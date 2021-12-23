//Find roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,x,y,z;
    printf("enter a,b,c given in the quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);
    z=pow((b*b)-(4*a*c),0.5);
    x=(-b+z)/(2*a);
    y=(-b-z)/(2*a);
    printf("the roots of the given equation are %d and %d",x,y);
}
