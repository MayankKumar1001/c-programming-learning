#include<stdio.h>// program for rank of 3 given students.
struct student{
	char name[30];
	int roll,marks;
};
int main(){
	int i,n;
	printf("Enter the number of total students : ");
	scanf("%d",&n);
	getchar();
	
	struct student s[n];
	
	for(i=0;i<3;i++){
		struct student si;
		
		printf("\n\nEnter student %d name : ",i+1);
		fgets(s[i].name,sizeof(s[i].name),stdin);
		
		printf("Enter total marks of %s : ",s[i].name);
		scanf("%d",&s[i].marks);
		
		printf("Enter roll no. of %s : ",s[i].name);
		scanf("%d",&s[i].roll);
		getchar();
		
	}
	if(s[0].marks>s[1].marks && s[0].marks>s[2].marks){
		printf("%s got rank 1.",s[0].name);
	}
	
	else{
		if(s[1].marks>s[0].marks && s[1].marks>s[2].marks){
		printf("%s got rank 1.",s[1].name);
	}
	
		else{
			printf("%s got rank 1.",s[2].name);
		}
	
	}
	
	return 0;
}  
/*output :-
Enter the number of total students : 3


Enter student 1 name : Nobita
Enter total marks of Nobita
 : 00
Enter roll no. of Nobita
 : 25


Enter student 2 name : Dekisugi
Enter total marks of Dekisugi
 : 100
Enter roll no. of Dekisugi
 : 4


Enter student 3 name : Sunio
Enter total marks of Sunio
 : 89
Enter roll no. of Sunio
 : 40
Dekisugi
 got rank 1.*/
