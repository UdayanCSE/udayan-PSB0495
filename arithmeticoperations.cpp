//  application of switch case on operations with 2 numbers
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,ch;
    printf("enter two numbers a and b here: ");
    scanf("%d %d",&a,&b);
    printf("Enter operation \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Remainder");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        c=a+b;
        printf("Sum is: %d",c);
        break;
        case 2:
        d=a-b;
        printf("Difference is: %d",d);
        break;
        case 3:
        e=a*b;
        printf("Product is: %d",e);
        break;
        case 4:
        f=a/b;
        printf("Quotient is: %d",f);
        break;
        case 5:
        g=a%b;
        printf("Remainder is: %d",g);
        break;
        default:
        printf("error");
        break;
    
    }
}
