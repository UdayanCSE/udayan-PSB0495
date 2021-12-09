#include <stdio.h>
int main()
{
    int a,b,ch,c,d,e,f;
    printf("enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("enter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    addition:
    case 1:
    c=a+b;
    printf("%d",c);
    break;
    subtraction:
    case 2:
    d=a-b;
    printf("%d",d);
    break;
    multiplication:
    case 3:
    e=a*b;
    printf("%d",e);
    break;
    division:
    case 4:
    f=a/b;
    printf("%d",f);
    break;
    case 5:
    goto multiplication;
    break;
    default:
    printf("invalid input");
}}
