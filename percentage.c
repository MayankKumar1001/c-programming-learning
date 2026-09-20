#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float percentage;
    printf("Enter 5 subjects marks (out of 100) : ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    percentage = (sub1+sub2+sub3+sub4+sub5)*0.2;
    printf("Percentage = %0.2f%",percentage);
    return 0 ;
}