#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=10;j++)
    {
    if(j%2!=0)
    printf("\n%d is present at %d\n",a[j],j);
    }
    
    return 0;
    
}