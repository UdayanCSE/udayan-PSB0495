//Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include <stdio.h>
int main()
{
    int a,b,c,d,e,per,total;
    float avg;
    printf("enter the marks of 5 subjects out of 100 \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    total=a+b+c+d+e;
    avg=(a+b+c+d+e)/5.0;
    per=((a+b+c+d+e)*100)/500;
    printf("the total is: %d",total);
    printf("\naverage of marks is: %.2f",avg);
    printf("\nthis is percentage: %d",per);
}
