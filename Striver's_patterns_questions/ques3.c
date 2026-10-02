#include<stdio.h>// program to print right angled numbered triangle.
int main(){

    int i,j,n;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}