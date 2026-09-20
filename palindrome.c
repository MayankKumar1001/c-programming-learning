#include<stdio.h>
int main()
{
    int a,b=0,rem,num;
    printf("enter a number : ");
    scanf("%d",&a);
    num=a;
    while (a>0)
    {
        rem=a%10;
        b=b*10+rem;
        a=a/10;
    }
   if(num==b)
   printf("%d is a palidrome.",num);
   else
   printf("%d is not a palidrome.",num);
   
   return 0;
}