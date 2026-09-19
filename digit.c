#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter any number : ");
    scanf("%d",&a);

    while(a=a/10)
    {
        i++;
    }
    printf("%d is no. of digit",i);
    return 0;
}