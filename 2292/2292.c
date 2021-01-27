#include <stdio.h>

int main(void){
    int n,i,t=1;
    
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        t+=(i-1)*6;
        if(n<=t) break;
    } 
    printf("%d",i);
    
    return 0;
}