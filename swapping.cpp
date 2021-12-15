//Swap two numbers
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 2 numbers need to be swapped: ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the numbers swapped: %d %d",a,b);
    
    return 0;
}

