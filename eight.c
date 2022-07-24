#include<stdio.h>
int main(){
int i,j,n=7;
int st,sp,k;
st=1;
sp=n-1;
for(i=1;i<=n;i++){
    k=1;
    for(j=1;j<=sp;j++){
        printf("  ");
    }
    for(j=1;j<=st;j++){
        printf("%d ",k);
        if(j<=st/2){
        k++;
        }
        else
        k--;
    
    }
    st+=2;
    sp--;
    printf("\n");
    
}
return 0;
}