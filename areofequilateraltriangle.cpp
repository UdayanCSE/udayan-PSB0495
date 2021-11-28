//Write a C program to calculate area of an equilateral triangle.
#include <stdio.h>
#include <math.h>
int main()
{
    int s;
    float a;
    printf("enter the side of equilateral triangle: ");
    scanf("%d",&s);
    a=(sqrt(3)/4)*pow(s,2);
    printf("the area of the equilateral triangle is: %.2f",a);
}
