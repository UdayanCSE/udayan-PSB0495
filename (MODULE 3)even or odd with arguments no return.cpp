#include<stdio.h>
int even(int i,int j)
{
    int k;
    for(k=i;k<=j;k++){
    if(k%2==0)
    printf("\n%d",k);}
}
int odd(int i,int j)
{
    int k;
    for(k=i;k<=j;k++){
    if(k%2!=0)
    printf("\n%d",k);}
}
int main()
{
    int a,b;
    printf("Enter the range: ");
    scanf("%d %d",&a,&b);
    printf("EVEN: ");
    even(a,b);
    printf("\nODD:");
    odd(a,b);
}
