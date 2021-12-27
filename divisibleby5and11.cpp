#include <stdio.h>
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("the given number is divisible by both 5 and 11");
	}
	else
	{
		printf("the given number is not divisible by both 5 and 11");
	}
	return 0;
}
