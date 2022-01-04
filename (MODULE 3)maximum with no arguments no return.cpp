//Return maximum of given two numbers with NO argument NO return
#include <stdio.h>
void max()
{
    int a,b;
    printf("enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d is the greatest number",a);
    else if(b>a)
    printf("%d is the greatest number",b);
    else
    printf("both the numbers are equal");
}
int main()
{
    max();
}
