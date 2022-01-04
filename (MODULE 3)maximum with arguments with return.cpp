//Return maximum of given two numbers WITH argument WITH return
#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else if(b>a)
    return b;   
}
int main()
{
    int x,y,z;
    printf("enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    z=max(x,y);
    printf("%d",z);
}

