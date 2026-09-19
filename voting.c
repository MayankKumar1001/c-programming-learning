#include<stdio.h>
int main()
{
    int a;
    printf("Enter the age : ");
    scanf("%d",&a);
    if(a>=18)
    printf("Person is eligible for voting.");
    else
    printf("Person is not eligible for voting.");
    return 0;
}