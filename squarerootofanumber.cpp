//Write a C program to enter any number and calculate its square root
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    printf("enter the number to find its square root: ");
    scanf("%d",&a);
    b=sqrt(a);
    printf("square root of the number is %d",b);
}
