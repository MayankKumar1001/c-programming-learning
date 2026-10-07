#include<stdio.h>
int main(){
	
	int a[30];
	int *ptr = a;
	int i,n,sum=0;
	
	printf("Enter five numbers : ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		sum=sum+ *(ptr+i);
	}
	printf("Sum = %d",sum);
		return 0;
}

/*output :-
Enter five numbers : 11
12
13
14
15


Sum = 65*/
