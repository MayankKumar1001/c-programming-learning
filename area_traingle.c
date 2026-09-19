#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("Enter the base and height of right angled triangle : ");
    scanf("%d%d",&base,&height);
    area = 0.5*base*height;
    printf("Area of the right angled triangle is : %0.2f",area);
    return 0;
}