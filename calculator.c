#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum,diff,product,division,power;
    char symbol;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Enter the operation required : ");
    scanf(" %c",&symbol);
  
    {
    switch (symbol)
    {
    case 42 : product= a*b;
                printf("%d * %d = %d",a,b,product);
                break;

    case 43 : sum = a+b;
                printf("%d + %d = %d",a,b,sum);
                break;

    case 45 : diff= a-b;
                printf("%d - %d = %d",a,b,diff);
                break;
    case 47 : division = a/b;
                printf("%d/%d = %d",a,b,division);
                break;
    case 94 : power = pow(a,b);
                printf("%d ^ %d = %d",a,b,power);
                break;
                
    default : printf("Invalid Choice.");
                break;
                
    
return 0;
    }
}
}
