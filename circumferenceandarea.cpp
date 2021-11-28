//Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include <stdio.h>
#include <math.h>
int main()
{
    int r,d;
    float c,a;
    printf("enter radius of the circle in metres: ");
    scanf("%d",&r);
    d=r*2;
    c=2*3.14*r;
    a=3.14*(pow(r,2));
    printf("the diameter of the circle in metres is: %d",d);
    printf("\nthe circumference of the circle in metres is: %.2f",c);
    printf("\nthe area of the circle in metres square is: %.2f",a);
}

