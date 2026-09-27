#include<stdio.h>
int main()
{
    int a[5],i;
    int *p;
    p=a;


    printf("Enter 5 integers : ");
    for(i=0;i<5;i++)
    scanf("%d",(p+i));

    for(i=0;i<5;i++)
    printf("\n\n%d",*(p+i));
    return 0;
}