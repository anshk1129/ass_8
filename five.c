#include<stdio.h>
int main(){
int i,j;
int st,sp;
st=1;
sp=4;
for(i=1;i<=5;i++){
    for(j=1;j<=sp;j++){
        printf("  ");
    }
    for(j=1;j<=st;j++){
    printf("* ");
    }
    st+=2;
    sp--;
    printf("\n");
    
}
return 0;
}