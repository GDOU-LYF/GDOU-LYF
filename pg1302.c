#include <stdio.h>
void main(void)
{
	int a,b,c,d;
	int max(int x,int y);
	printf("请输入3个整数，中间用逗号分隔：");
	scanf("%d,%d,%d",&a,&b,&c);
	d=max(a,b);
	if(d<c){
		d ;
	}
	printf("%d,%d和%d两者的最大值为：%d\n",a,b,c,d);
}

int max(int x,int y)
{
	int z;
	if (x>y)
		z=x;
	else
		z=y;
	return z;
}
