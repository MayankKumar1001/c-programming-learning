#include<stdio.h>
int main()
{
    int a,sum=0,i=1;
    printf("Enter the natural number.");
    scanf("%d",&a);
    while(i<=a)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of 1 to %d is  = %d",a,sum);
    return 0;
}