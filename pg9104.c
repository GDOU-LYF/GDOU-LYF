#include<stdio.h>
void main(void)
{
	int a[10]={0},i;
	int sum=0,count;
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)  {
			sum+=a[i] 
			count++;
		}
	}
	printf("所有正整数个数为%d,和为%d\n ",count,sum);
}




