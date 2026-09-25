#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse is :- \n\n");
    for(j=9;j>=0;j--)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}