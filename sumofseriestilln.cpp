#include <stdio.h>
int main()
{
    int i,a=0,n;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+i;
    }
    printf("%d",a);
}

