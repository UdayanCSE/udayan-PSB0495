//check whether entered year is leap year or not
#include <stdio.h>
int main()
{
    int a;
    printf("enter year: ");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("the given year is a leap year");
    }
    else
    {
        printf("the given year is not a leap year");
    }
}
