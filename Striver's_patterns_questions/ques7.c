#include<stdio.h> // upper triangle pattern (stars).
int main(){

    int i,j,k,n;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(k=n;k>i;k--){
            printf(" ");
        }
        for(j=3;j<=2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}