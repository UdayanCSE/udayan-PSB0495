//retrieve remainder after division of two numbers without using mod operator
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 2 numbers: ");
    scanf("%d %d",&a,&b);
    while(a>=b)
    {
        a=a-b;
    }
    printf("the remainder is: %d",a);
}
