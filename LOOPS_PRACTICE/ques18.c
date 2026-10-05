#include<stdio.h> // program to Print the multiplication result from 1 to n
int main(){
	
	int i,j,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
	return 0;
}
/* output :-
Enter the value of n : 5
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
*/
