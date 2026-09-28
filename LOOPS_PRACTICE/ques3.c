#include<stdio.h> // program to print a triangle with 5 rows(decreasing while downward.)
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}