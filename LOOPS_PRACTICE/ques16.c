#include<stdio.h> // program to print a hollow right angled triangle.
int main(){
	
	int i,j,k,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
			for(k=3;k<=i && i<n;k++){
				printf(" ");
			}
			for(j=1;j<=n-1 && i==n; j++){
				printf("*");
			}
			for(j=i;j<=i && j>1 && i!=n;j++){
				printf("*");
			}
			
		}
		
		printf("\n");
	}
	return 0;
}/*output :- 
Enter the value of n : 7
*
**
* *
*  *
*   *
*    *
*******
*/
