#include<stdio.h>// program to change the value of variable using pointer.
int main(){
	
	int x=10;
	int *p=&x;
	
	*p=30;
	
	printf("x=%d",x);
	
	return 0;
	
}
/*output:-
x=30
*/
