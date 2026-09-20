#include<stdio.h>
int main()
{
    int a,x=a,b=0,rem;
    printf("enter a number : ");
    scanf("%d",&a);
    x=a;
    while (a>0)
    {
        rem=a%10;
        b=b*10+rem;
        a=a/10;
    }
    printf("reverse of %d is %d",x,b);
    
    return 0;


}