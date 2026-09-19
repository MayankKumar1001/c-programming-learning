#include<stdio.h>
int main()
{
    char symbol;
    int value;
    printf("Enter the symbol : ");
    scanf(" %c",&symbol);
     value = symbol;
     printf("ASCII code of %c is = %d",symbol,value);
     return 0;
}