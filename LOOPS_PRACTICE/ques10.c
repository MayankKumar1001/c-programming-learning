#include<stdio.h> // program to print a floyd's triangle.)
int main(){

    int i,j,n,m=1;

    printf("enter a number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d  ",m);
            m=m+1;
        }
        printf("\n");
    }
    return 0;
}