#include <stdio.h>
int main()
{
    char c='A',i,j;
    for(i=1;i<=5;i++)
     {
        for(j=1;j<=i;j++)
        {
           printf("%c",c);
        }
        c=c+1;
        printf("\n");
     }
}
