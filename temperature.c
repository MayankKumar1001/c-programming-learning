#include<stdio.h>
int main()
{
    int temp,n;
    float f,c;
    printf("Select the option : ");
    printf("\n\n1) Fahrenheit to Celcius conversion.\n2) Celcius to Fahrenheit conversion.\n\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1 : printf("Enter temperature in Fahrenheit : ");
                scanf("%f",&f);
                c =  (f-32)*5/9;
                printf("%0.2f temperature in fahrenheit is %0.2f in celcius",f,c);
        break;
    case 2 : printf("Enter temperature in Celcius : ");
                scanf("%f",&c);
                f= c*9/5 + 32;
                printf("%0.2f temperature in celcius is %0.2f in fahrenheit",c,f);
                break;
    
    default: printf("Enter a valid choice.");
        break;
    }
    return 0;
}   