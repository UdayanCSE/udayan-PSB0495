// Check whether the triangle is equilateral, isosceles, or scalene triangle.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 3 sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("triangle is equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("triangle is isoceles");
    }
    else
    {
        printf("triangle is scalene");
    }
}

