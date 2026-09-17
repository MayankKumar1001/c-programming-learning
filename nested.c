/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,rows,coloumns;
    printf("Enter number of rows(dots) = ");
    scanf("%d",&rows);
    printf("Enter number of coloumns(dots) = ");
    scanf("%d",&coloumns);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=coloumns; j++)
        {
            printf(".");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,rows,coloumns,exit;
    char symbol;
    for(; ;)
    {
        printf("Enter number of rows : ");
    scanf("%d",&rows);

    printf("Enter number of coloumns : ");
    scanf("%d",&coloumns);

    printf("Enter the symbol : ");
    scanf(" %c",&symbol);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=coloumns; j++)
        {
            printf("%c",symbol);
        }
        printf("\n");
    }
    
    }
    
    return 0;
}
    

    #include<stdio.h>
    int main()
    {
        int i,j,k;
        for(i=1;i<=5;i++)
        {
            for(k=1;k<=5-i;k++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
        printf("\n");
        }
        return 0;

    }*/
   #include<stdio.h>
   int main()
   {
    int i,j,k;
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=8;j++)
        {
            printf("+");
        }
        printf("\n");
        for(j=1;j<=8;j++)
        {
            if(j==1 || j ==8)
            printf("+");

            else
            printf(" ");
        }
        printf("\n");
        for(j=1;j<=8;j++)
        {
            printf("+");
        }
        printf("\n");
    }
    return 0;
   }