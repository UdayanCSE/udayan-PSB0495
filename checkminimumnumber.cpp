// program to find minimum among three numbers
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("this is the least number: %d",a);
    }
    else if(b<a && b<c)
    {
        printf("this is the least number: %d",b);
    }
    else if(c<a && c<b)
    {
        printf("this is the least number: %d",c);
    }
    else
    {
        printf("all the numbers are equal");
    }
}
