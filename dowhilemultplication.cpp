#include <stdio.h>
int main()
{
    int i=1,a,b;
    printf("enter number: ");
    scanf("%d",&a);
    do
    {
        b=a*i;
        printf("\n%d * %d = %d",a,i,b);
        i++;
    }
    while(i<=20);
}
