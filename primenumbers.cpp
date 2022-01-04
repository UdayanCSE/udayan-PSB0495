#include <stdio.h>
int main()
{
    int n,i=2,c,a;
    printf("Enter the number of prime numbers you want:");
    scanf("%d",&n);
    for(c=1;c<=n;i++)  
    {
        for(a=2;a<=i;a++)
        {
            if(i%a==0)
                break;
        }
        if(a==i) 
        {
            printf("%d\n", i);
            c++;    
        }
    }
}
