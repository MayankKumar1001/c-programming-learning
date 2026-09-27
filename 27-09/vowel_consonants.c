#include<stdio.h>
int main()
{
    char a[100];
    int i;
    int vowels=0;
    int consonants=0;
    printf("Enter a string. : ");
    scanf("%s",a);

     for(i=0;a[i]!='\0';i++)
     {
    if(a[i]== 'a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
      vowels++;
     
    else
    consonants++;
     }

     printf("vowels : %d\n",vowels);
     printf("consonants : %d",consonants);

     return 0;
}