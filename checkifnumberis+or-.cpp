#include <stdio.h>
int main()
{
	int a;
	printf("enter the number to be checked: ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("the given number is positive");
	}
	else if(a<0)
	{
		printf("the given number is negative");
	}
	else
	{
		printf("the given number is 0");
	}
	
	return 0;
}
