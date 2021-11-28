//Write a C program to enter base and height of a triangle and find its area
#include <stdio.h>
int main()
{
    int b,h,a;
    printf("enter base and height of triangle: ");
    scanf("%d %d",&b,&h);
    a=(b*h)/2;
    printf("the are of the triangle is: %d",a);
}
