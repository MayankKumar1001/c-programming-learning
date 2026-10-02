#include<stdio.h> // program to print the star patterned inverted triangle.
int main(){

    int i,j,n;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}