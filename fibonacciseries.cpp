//Generate first n numbers in the Fibonacci series
#include <stdio.h>
int main()
{
    int a=0,b=1,c,i=1,n;
    printf("enter first how many numbers of the fibonacci series you want: ");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    while(i<n)
    {
        c=a+b;
        i++;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
