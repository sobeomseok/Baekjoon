#include<stdio.h>
int main(void)
{
	int a,b,c,t;
	
    scanf("%d%d%d", &a,&b,&c);
	if (b>=c){
		printf("-1");
        return 0;
	}
	t=a/(c-b)+1;
	printf("%d",t);

    return 0;
}