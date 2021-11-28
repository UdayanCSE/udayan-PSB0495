//Write a C program to find power of any number x ^ y.
#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z;
    printf("enter 2 numbers x and y to find x to the power of y: ");
    scanf("%d %d",&x,&y);
    z=pow(x,y);
    printf("x^y is %d",z);
}


