#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=9;j++)
    {
    if(a[j]==0)
    printf("\n%d is zero.",a[j]);

    else if(a[j]<0)
    printf("\n%d is negative number.",a[j]);
    
    else
        printf("\n%d is positive number.",a[j]);
    }
    
    return 0;
    
}