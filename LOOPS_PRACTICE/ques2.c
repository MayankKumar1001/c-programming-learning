#include<stdio.h> // program to print a triangle with 5 rows(increasing while downward.)
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}