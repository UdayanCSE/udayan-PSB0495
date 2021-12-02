// program to find factorial of a number
#include <stdio.h>
int main()
{
    int a,i,b;
    b=1;
    printf("enter number that you require factorial of: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       b=b*i;
    }
    printf("%d",b);
}
