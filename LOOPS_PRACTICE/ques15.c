#include<stdio.h> // square of n stars.
int main(){

        int  i,j,n,k;

        printf("Enter the value of n : ");
        scanf("%d",&n);

        for(i=1;i<=n;i++){
            if(i==1 || i==n){
                for(j=1;j<=n;j++)
                printf("*");
    }
            else{
                for(j=1;j<=n;j++){
                
                    if(j==1 || j==n){
            
                        printf("*");

                for(k=j+1;k<=n-1;k++)
                printf(" ");
            
    }
            }
        }
            
            printf("\n");
        
}
        
           
   return 0;     
}
        


