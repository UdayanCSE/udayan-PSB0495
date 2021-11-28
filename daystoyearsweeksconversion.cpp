//Write a C program to convert days into years, weeks and days.
#include <stdio.h>
int main()
{
    int d,w,y,t;
    printf("enter days: ");
    scanf("%d",&d);
    y=d/365;
    w=(d-(y*365))/7;
    d=d-((y*365)+(w*7));
    printf("years: %d",y);
    printf("\n weeks %d",w);
    printf("\n days: %d",d);
}

