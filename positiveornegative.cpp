//Check entered number is positive or negative
#include <stdio.h>
int main()
{
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("the number is positive");
    }
    else if(a<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is 0 which is neutral");
    }
}
