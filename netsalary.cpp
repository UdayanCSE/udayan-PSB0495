//Calculate net salary of employee given basic,da,hra,pf and lic
#include <stdio.h>
int main()
{
	int basic,da,hra,pf,lic;
	float salary;
	printf("enter basic amount: ");
	scanf("%d",&basic);
	printf("enter da: ");
	scanf("%d",&da);
	printf("enter hra: ");
	scanf("%d",&hra);
	printf("enter pf: ");
	scanf("%d",&pf);
	printf("enter lic: ");
	scanf("%d",&lic);
	salary=basic+da+hra-(pf+lic);
	printf("the net salary of the employee is: %f",salary);	
	
	return 0;
}
