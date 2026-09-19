#include<stdio.h>
int main()
{
    float radius,area,circumference;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    area = 3.14* radius * radius;
    circumference = 2*3.14*radius;
    printf("Area of circle is = %0.2f\n",area);
    printf("Circumference of circle is = %0.2f",circumference);

    return 0;
}