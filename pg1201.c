#include <stdio.h>
float add(float x,float y);
void main(void)
{
	float a,b,c;
	printf("请输入两个数，中间用逗号隔开：");
	scanf("%f,%f",&a,&b);
	c=add(a,b);
	printf("两个数� 臀�%f\n",c);
}
float add(float x,float y)
{
	float z;
	z=x+y;
	return z;
}
