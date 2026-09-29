#include<stdio.h> // program to print inverted decreasing numbers triangle.
int main()
{
    int i,j,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d  ",j);
        }
        printf("\n");
    }
    return 0;
}