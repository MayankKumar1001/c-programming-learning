#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    int *p;
    p=a;

    printf("Enter 5 integers : ");
    for(i=0;i<5;i++)
    scanf("%d",(p+i));

    for(i=0;i<5;i++)
    sum=sum + *(p+i);

    printf("SUM is %d",sum);
    return 0;

}