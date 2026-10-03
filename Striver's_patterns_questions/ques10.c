#include<stdio.h> // program to print a right angled triangle of order n.
int main(){

    int i,j,n;
    
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    for(i=0;i<=n-1;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/* output :-
Enter the value of n : 10
*
**
***
****
*****
******
*******
********
*********
**********
*********
********
*******
******
*****
****
***
**
*
*/
