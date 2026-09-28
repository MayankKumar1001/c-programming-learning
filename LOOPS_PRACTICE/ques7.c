#include<stdio.h> // program to Print an alphabet triangle.
int main()
{
    int i,j;
    char c;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}