#include<stdio.h>  
void sum();  
void dif();
void multi();
void div();
void rem();
void main()  
{  
    printf("\nGoing to calculate the sum of two numbers:");  
    sum();
    printf("\nGoing to calculate the difference of two numbers:");  
    dif();
    printf("\nGoing to calculate the product of two numbers:");  
    multi();
    printf("\nGoing to calculate the quotient from division of two numbers:");  
    div();
    printf("\nGoing to calculate the remainder from divsion of two numbers:");  
    rem();
}
void sum()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The sum is %d",a+b);  
}  
void dif()
{
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The difference is %d",a-b);
}
void multi()
{
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The product is %d",a*b);
}
void div()
{
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The quotient is %d",a/b);
}
void rem()
{
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The remainder is %d",a%b);
}
