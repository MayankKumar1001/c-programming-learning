#include<stdio.h>

union value{
	
	int marks;
	float percentage;
	char grade;
};

struct student{
	
	char name[30];
	int roll;
	union value result;
};

void main(){
	
	int n;
	
	struct student s;
	printf("Enter the name of student : ");
	fgets(s.name,30,stdin);
	
	printf("Enter roll number of student : ");
	scanf("%d",&s.roll);
	
	printf("Choose by option number what you want to store : \n\n");
	printf("1. Marks\n2. Percentage\n3. Grade\n");
	
	scanf("%d",&n);
	
	switch(n){
		
		case 1 : printf("\nEnter Marks : ");
					scanf("%d",&s.result.marks);
					break;
		
		case 2 : printf("\nEnter Percentage : ");
					scanf("%f",&s.result.percentage);
					break;
					
		case 3 : printf("\nEnter Grade : ");
					scanf(" %c",&s.result.grade);
					break;
					
		default : printf("Enter a valid choice !!!");
	}
	if(n==1){
		printf("\n%s",s.name);
		printf("Roll no.- %d\n",s.roll);
		printf("Marks obtained = %d",s.result.marks);
	}
	else if (n==2){
		printf("\n%s",s.name);
		printf("Roll no.- %d\n",s.roll);
		printf("Total percentage = %0.2f",s.result.percentage);
	}
	else{
		printf("\n%s",s.name);
		printf("Roll no.- %d\n",s.roll);
		printf("Grade %c",s.result.grade);
	}
}
/*output :-
Enter the name of student : Mayank Kumar
Enter roll number of student : 18
Choose by option number what you want to store :

1. Marks
2. Percentage
3. Grade
3

Enter Grade : A

Mayank Kumar
Roll no.- 18
Grade A
*/
