#include<stdio.h>
void main()
{
    void rectangle(void);
    rectangle();
    
    void circle(void);
    circle();
}
void rectangle()
{
    float a,b,area;
    printf("Enter Length and Breadth of the rectangle : ");
    scanf("%f%f",&a,&b);
    area = a*b;
    printf("Area of rectangle is = %0.2f",area);
}
void circle()
{
    float a,area;
    printf("\n\nEnter Radius of circle : ");
    scanf("%f",&a);
    area = 3.14*a*a;
    printf("Area of circle is = %0.2f",area);
}
