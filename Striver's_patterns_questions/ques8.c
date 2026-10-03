#include<stdio.h> // program to print the inverted triangle of stars
int main(){
    
    int i,j,n,k;
    
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
            for(k=1;k<=n-i;k++){
                printf(" ");
            }
            for(j=1;j<=2*i-1;j++){
                printf("*");
            }
            
        printf("\n");
    }
    return 0;
    
}