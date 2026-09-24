#include<stdio.h>
int factorial(int);
 void main()
{
    int a,c;
    printf("Enter a number : ");
    scanf("%d",&a);

    c=factorial(a);
    
    printf("%d is the factorial",c);
}
int factorial(int x)
{
    if (x==0 || x==1)
    return 1;
    int fact;
    fact=x*factorial(x-1);
    return (fact);

}