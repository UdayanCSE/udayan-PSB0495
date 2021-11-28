//Write a C program to enter length and breadth of a rectangle and find its area.
#include <stdio.h>
int main()
{
    int l,b,a;
    printf("enter length and breadth of the rectangle: ");
    scanf("%d %d",&l,&b);
    a=l*b;
    printf("the area of the rectangle is %d",a);
}
