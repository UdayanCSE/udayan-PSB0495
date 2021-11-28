//Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include <stdio.h>
int main()
{
    int c,f;
    printf("enter temperature in fahrenheit: ");
    scanf("%d",&f);
    c=(f-32)/1.8;
    printf("temperature in celsius is %d",c);
}

