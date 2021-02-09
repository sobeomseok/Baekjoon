#include <stdio.h>

int f(int N){
    if(N>1) return N*f(N-1);
    else return 1;
}

int main(void){
    int N,sum=1;
    scanf("%d",&N);
    printf("%d",f(N));
    return 0;
}