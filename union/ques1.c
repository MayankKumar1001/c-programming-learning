#include<stdio.h>

union Data{
	int i;
	float f;
	char ch;
};

void main(){
	
	union Data d;
	
	printf("Enter the integer value : ");
	scanf("%d",&d.i);
	printf("\nInteger = %d\n",d.i);
	
	printf("Enter the float value : ");
	scanf("%f",&d.f);
	printf("Float value = %0.2f\n",d.f);
	
	printf("Enter the character : ");
	scanf(" %c",&d.ch);
	printf("Character = %c\n\n",d.ch);

	printf("size of d = %zu",sizeof(d));
	
}
/*OUTPUT :-
Enter the integer value : 10

Integer = 10
Enter the float value : 0.1
Float value = 0.10
Enter the character : M
Character = M

size of d = 4*/
