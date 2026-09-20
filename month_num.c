#include<stdio.h>
int main()
{
    int num;
    printf("enter the month number : ");
    scanf("%d",&num);
    if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12)
    printf("this month contains 31 days.");

    else if (num==4 || num==6 || num==9 || num==11)
    printf("this month contains 30 days.");

    else if (num==2)
    printf("this month contains 28 or 29 days.");

    else
    printf("enter a valid month number.");

    return 0;
}