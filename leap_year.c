#include<stdio.h>
int main()
{
    int year;
    printf("enter the year : ");
    scanf("%d",&year);
    
    if(year%4==0)
    {
        if(year%400==0)
        {
            printf("this is a leap year.");
        }
        else if(year%100==0)
        {
            printf("this is not a leap year.");
        }
        else
        {
            printf("this is a leap year.");
        }
    }
    return 0;
}