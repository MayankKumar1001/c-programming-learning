#include<stdio.h>// program to use the pointer to access and print the 1st, 3rd, and 5th elements of array of 5 elements.
int main(){
	
	int a[]={1,2,3,4,5};
	int *p=&a;
	
	printf("1st element = %d\n3rd element = %d\n5th element = %d\n",*p,*(p+2),*(p+4));
	
	return 0;
}
/*output :-
1st element = 1
3rd element = 3
5th element = 5
*/
