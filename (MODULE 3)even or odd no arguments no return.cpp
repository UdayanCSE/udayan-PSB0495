#include<stdio.h>
void even()
{
    int k,i,j;
    printf("enter the range for even numbers: ");
    scanf("%d %d",&i,&j);
    for(k=i;k<=j;k++)
	{
	if(k%2==0)
    printf("\n%d",k);
    }
}
void odd()
{
    int k,i,j;
    printf("\nenter the range for odd numbers: ");
    scanf("%d %d",&i,&j);
    for(k=i;k<=j;k++)
	{
	if(k%2==1)
    printf("\n%d",k);
    }
}
int main()
{
	even();
	odd();
}

