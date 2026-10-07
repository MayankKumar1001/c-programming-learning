#include<stdio.h> //program to print 5 numbers using pointer.
int main(){
	
	int a[30];
	int *ptr = a;
	int i,n;
	
	printf("Enter five numbers : ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		printf("%d\n",*(ptr+i));
	}
		return 0;
}
/*
output :- 
Enter five numbers : 11
12
13
14
15


11
12
13
14
15
*/
