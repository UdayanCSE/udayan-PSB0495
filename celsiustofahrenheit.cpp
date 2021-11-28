//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include <stdio.h>
int main()
{
    int c,f;
    printf("enter temperature in celsius: ");
    scanf("%d",&c);
    f=c*(1.8)+32;
    printf("temperature in fahrenheit is %d",f);
}
