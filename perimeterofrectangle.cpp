//Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include <stdio.h>
int main()
{
    int l,b,p;
    printf("enter length and breadth of the rectangle: ");
    scanf("%d %d",&l,&b);
    p=2*(l+b);
    printf("the perimeter of the rectangle is %d",p);
}

