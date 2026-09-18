#include<stdio.h>
void main()
{
   float x,y;
    printf("Enter length and breadth of the rectangle : ");
    scanf("%f%f",&x,&y);

    void rectangle(float , float);
    rectangle(x,y);

   printf("\n\nEnter radius of the circle : ");
    scanf("%f",&x);
    
    void circle(float);
    circle(x);
    
}
void rectangle(float a , float b)
{
    float area;
   
    area = a*b;
    printf("Area of rectangle is = %0.2f",area);
}
void circle(float a)
{
    float area;
   
    area = 3.14*a*a;
    printf("Area of circle is = %0.2f",area);
}
