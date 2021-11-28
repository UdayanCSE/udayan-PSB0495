//Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include <stdio.h>
int main()
{
    int c;
    float m,k;
    printf("enter length in centimeters: ");
    scanf("%d",&c);
    m=c/100;
    k=m/1000;
    printf("length in meters is: %.3f",m);
    printf("\nlength in kilometers is: %.3f",k);
}

