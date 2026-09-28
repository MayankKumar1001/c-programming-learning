#include<stdio.h> // program to print square of 5x5 star pattern.
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*  ");// added space to make the pattern look like a square.
        }
        printf("\n");
    }
    return 0;
}