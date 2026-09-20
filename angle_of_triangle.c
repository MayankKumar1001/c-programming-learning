#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter angles triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;

    if (sum==180)
    printf("this is a valid triangle.");
    else
    printf("this is an invalid triangle.");
    return 0;

}