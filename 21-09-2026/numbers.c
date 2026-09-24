#include<stdio.h>
void num(int);
void main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    num(n);
   
}
void num(int a)
{
    
    if(a==1)
    {printf("%d ",a);
    return;
    }
     num(a-1);
     printf("%d ",a);
     return ;
     
}