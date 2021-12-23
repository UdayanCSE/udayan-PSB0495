//program to check if given number is palindrome or not
#include <stdio.h>
int main()
{
    int n,temp,r,c=0;
    printf("enter the number to be checked: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        c=(c*10)+r;
        n=n/10;
    }
    if(temp==c)
    printf("the number is palindrome");
    else
    printf("the number is not a palindrome");
}
