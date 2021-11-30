// Check whether the triangle is equilateral, isosceles, or scalene triangle.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 3 angles of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180)
    {
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
    else
    {
     printf("entered angles dont form a triangle");
    }   
}
