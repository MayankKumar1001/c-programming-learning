#include<stdio.h> // program to print the star patterned inverted triangle.
int main(){

    int i,j,n;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++){
        for(j=n-1;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}