//Return maximum of given two numbers WITH argument NO return
#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    printf("%d is the greatest number",a);
    else if(b>a)
    printf("%d is the greatest number",b);
    else
    printf("both the numbers are equal");
}
int main()
{
    int x,y;
    printf("enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    max(x,y);
}

