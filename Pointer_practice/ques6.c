#include<stdio.h>//program to print all elements of an array using a pointer. Do not use array indexing (a[i]).
int main(){
	
	int a[]={3,4,5,6,7,8};
	int *p =&a;
	int i;
	
	for(i=0;i<6;i++){
		printf("%d\n",*p);
		p++;
	}
	return 0;
}
/*output :-
3
4
5
6
7
8*/
