#include <stdio.h>

int main(void){
    char s[101]={0,};
    int count[26]={0,};
    
    scanf("%s",&s);
    for(int i='a'; i<='z'; i++){
        for(int j=0; j<100; j++){
            if(s[j]==i){
                count[i-97]=j+1;
                break;
            }
        }
    }
    for(int i=0; i<26; i++) printf("%d ", count[i]-1);
    
    return 0;
}