#include <stdio.h>

int main(void){
    int n, sum=0;
    char a[101]={0,};
    scanf("%d", &n);
    scanf("%s", &a);
    
    for(int i=0; i<n; i++){
        sum+=a[i]-'0';
    }
    printf("%d", sum);
    
    return 0;
}