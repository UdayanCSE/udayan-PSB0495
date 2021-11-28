//  Enter two angles of a triangle and find the third angle
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 2 known angles of the trianlge: ");
    scanf("%d %d",&a,&b);
    c=180-(a+b);
    printf("the unknown angle is %d",c);
}

