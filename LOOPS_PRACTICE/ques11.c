#include<stdio.h>// program to print the alternative 0 and 1.
int main(){
    int i,j,n,m;
    
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2!=0){
            for(j=1;j<=i;j++){
            m=j-1;
            if(j%2!=0){
                printf("%d",j-m);
            }
            else{
                printf("%d",j-j);
            }
        }
    }
        else{
            for(j=1;j<=i;j++){
            m=j-1;
            if(j%2!=0){
                printf("%d",j-j);
            }
            else{
                printf("%d",j-m);
            }
        }

    }
        
        printf("\n");
    }
    return 0;
}
/* output :-
Enter a number : 5
1
01
101
0101
10101
*/