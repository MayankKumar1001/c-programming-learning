#include<stdio.h> // program to print the value of the variable using both the variable itself and the pointer.
int main(){
	
	int x=1;
	int *p=&x;
	
	printf("x=%d\n",x);//printing value of x using x.
	printf("x=%d",*p);//printf value of x using pointer pointing to x.
	
	return 0;
}
/* output :-
x=1
x=1
*/
