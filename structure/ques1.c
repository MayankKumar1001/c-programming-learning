#include<stdio.h>

struct student{
	char a[30];
	int roll,marks;
};
int main(){
	
	struct student s1;
	
	printf("Enter Student's name : ");
	gets(s1.a);
	
	printf("Enter the roll no. : ");
	scanf("%d",&s1.roll);
	
	printf("Enter the marks : ");
	scanf("%d",&s1.marks);
	
	if(s1.marks>=33){
		printf("%s is pass.",s1.a);
	}
	else 
	{
		printf("%s is fail.",s1.a);
	}
	
	return 0;
}
/*output :-
Enter Student's name : Mayank Kumar
Enter the roll no. : 18
Enter the marks : 96
Mayank Kumar is pass.
*/
