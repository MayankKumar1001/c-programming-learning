#include<stdio.h> //Print a centered inverted number pyramid.
int main(){
	
	int i,j,k,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(k=1;k<=i;k++){
			printf(" ");
		}
		for(j=1;j<=n-i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
/*
output :-
Enter the value of n : 5
12345
 1234
  123
   12
    1
*/
