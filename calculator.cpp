#include <stdio.h>
int main()
{
    int a,t1,d1,a1,v1,c,f,d,e,ch;
    float d2,d3,a2;
    printf("enter the corresponding number to the conversion choice you want to select:\n1.Time conversion\n2.Distance conversion\n3.Area conversion\n4.Volume conversion\n5.Temperature conversion\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("\nenter 1 for minutes to seconds conversion\nenter 2 for hours to minutes conversion\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("enter time in minutes: ");
            scanf("%d",&t1);
            printf("%d minutes is %d seconds",t1,t1*60);
        }
        else if(a==2)
        {
            printf("enter time in hours: ");
            scanf("%d",&t1);
            printf("%d hours is %d minutes",t1,t1*60);
        }
        case 2:
        printf("\nenter 1 for kilometers to meters and centimeters conversion\nenter 2 for centimeters to meters and kilometers conversion\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("enter distance in kilometers: ");
            scanf("%d",&d1);
            printf("%d kilometers is %d meters and %d centimeters",d1,d1*1000,d1*100000);
        }
        else if(a==2)
        {
            printf("enter distance in centimeters: ");
            scanf("%d",&d1);
            d2=d1/100.0;
            d3=d1/100000.0;
            printf("%d centimeters is %2f meters and %2f kilometers",d1,d2,d3);
        }
        case 3:
        printf("\nenter 1 for m square to cm square conversion\nenter 2 for cm square to m square conversion\n");
        scanf("%d",&a);
        if(a==1)
        {
        printf("enter area value in meters square: ");
        scanf("%d",&a1);
        printf("%d meters square is %d centimeters square",a1,a1*10000);
        }
        else if(a==2)
        {
            printf("enter area value in centimeters square: ");
            scanf("%d",&a1);
            a2=a1/10000.0;
            printf("%d centimeters square is %f meters square",a1,a2);
        }
        case 4:
        printf("enter volume in cubic meters: ");
        scanf("%d",&v1);
        printf("%d cubic meters is %d litres",v1,v1*1000);
        case 5:
        printf("\nenter 1 for celsius to fahrenheit\nenter 2 for fahrenheit to celsius\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("enter temperature in celsius: ");
            scanf("%d",&c);
            f=c*(1.8)+32;
            printf("temperature in fahrenheit is %d",f);
        }
        else if(a==2)
        {
            printf("enter temperature in fahrenheit: ");
            scanf("%d",&f);
            c=(f-32)/1.8;
            printf("temperature in celsius is %d",c);
        }
    }
    return 0;
}

