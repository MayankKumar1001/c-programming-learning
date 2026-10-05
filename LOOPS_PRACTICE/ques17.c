#include<stdio.h> // program to Print the same number sequence on every row
int main(){
	
	int i,j,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
