#include<stdio.h> // program to Print the repeated alphabet triangle.(repeat the row's alphabet character.)
int main()
{
    int i,j;
    char c;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}