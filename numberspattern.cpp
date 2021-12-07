#include <stdio.h>
int main()
{
    int c=1,i,j;
    for(i=1;i<=5;i++)
     {
        for(j=1;j<i;j++)
        {
           printf("%d ",c);
           c=c+1;
        }
        printf("\n");
     }
}
