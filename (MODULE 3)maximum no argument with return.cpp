//Return maximum of given two numbers NO argument WITH return
#include <stdio.h>
int max()
{
	int a,b;
	printf("enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b) 
    return a;
    else if(b>a)
    return b;   
}
int main()
{
	int z;
    z=max();
    printf("%d",z);
}
