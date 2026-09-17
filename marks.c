/*#include<stdio.h> 
int main() 
{ 
   int i=1,n,table;
   printf("Enter a number : ");
   scanf("%d",&n);
    while(i<=10)
    {
        table=n*i;
        printf("%d * %d = %d\n",n,i,table);
        i++;
    }
return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int n,table,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    do
    {
        table = n*i;
        printf("%d * %d = %d\n",n,i,table);
        i++;
    }
    while(i<=10);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n,table,i;
    for( ; ;)
    {
        printf("Enter any number or Press 0 for exit. : \n");
        
    scanf("%d",&n);
    
    if(n==0)
    {
        break;
    }
    for(i=1;i<=10;i++)
    {
        table = n*i;
        printf("%d * %d = %d\n",n,i,table);
    }
    }
    
return 0;
}