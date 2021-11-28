//Program to check if the user is eligible for voting for not
#include <stdio.h>
int main()
{
    int a;
    printf("enter your age");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("you are eligible for voting");
        
    }
    else
    {
        printf("you are not eligible for voting");
    }
}
