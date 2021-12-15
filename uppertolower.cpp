//Convert an upper-case character to a lower-case character.
#include <stdio.h>
main()
{
    char a;
    int b;
    printf("enter uppercase character: ");
    scanf("%c",&a);
    b=a+32;
    printf("%c in lowercase is %c",a,b);
}
