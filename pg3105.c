#include <stdio.h>
int main()
 { 
    int n,ret=0;
    printf("请输入一个整数: ");
    scanf("%d",&n);
    while(n!=0){
    	ret=ret*10+n%10;
    	n=n/10;
	}
	printf("逆序� 龅恼�:%d\n",ret);
    printf("\n");
    return 0;
 }
