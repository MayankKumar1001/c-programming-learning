#include<stdio.h>

int sum(int);
void main()
{
    int n,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=sum(n);
    printf("summation of first %d natural numbers = %d",n,a);

}

int sum(int x)
{
    int sum1;
    if (x==1)
    return (1);
sum1=x+sum(x-1);
return (sum1);
}