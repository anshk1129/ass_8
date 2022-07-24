#include<stdio.h>
int main(){
int i,j,n=5,k=0;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
         if(j==n||j==n-k||i==n){
            printf("* ");

         }
         
         else{
            printf("  ");
         }
    }
    printf("\n");
    k++;
    
}
return 0;
}