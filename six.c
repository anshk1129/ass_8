#include<stdio.h>
int main(){
int i,j;
int st,sp;
st=9;
sp=0;
for(i=1;i<=5;i++){
    for(j=1;j<=sp;j++){
        printf("  ");
    }
    for(j=1;j<=st;j++){
    printf("* ");
    }
    st-=2;
    sp+=1;
    printf("\n");
    
}
return 0;
}