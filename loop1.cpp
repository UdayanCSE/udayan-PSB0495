#include <stdio.h>
int main()
{
	int a,b,i;
	printf("enter starting and ending number: ");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("\neven number: %d",i);
		}
		else
		{
			printf("\nodd number: %d",i);
		}
	}
}
