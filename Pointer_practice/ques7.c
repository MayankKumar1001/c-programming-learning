#include<stdio.h>
int main(){
	
	int a[]={10,20,30,40,50,60};
	int *p=&a[1];
	
	printf("4th element is = %d",*(p+2));
	p--;
	printf("\n1st element is = %d",*p);
	
	return 0;
}
/*A pointer is initially pointing to the
 second element of an array. Using pointer arithmetic,
access the fourth element and then the first element.

output :- 4th element is = 40
1st element is = 10*/
