#include<stdio.h>
void main(void)
{
	int i,index,m;
	float a[10];
	double min;
	printf("请输入10个实型数据：\n");
	scanf("%f",&a[0]);
	min=a[0];m=0;
	for(i=1;i<10;i++){
		s nf("%f",&a[i]);
		if(a[i]<min){
			min=a[i];
			m=i;
		}
	}
	printf("最小的数为%5.1f，其下标为%d\n",min,m);
	if(m!=0){
		float temp=a[0];
		a[0]=a[m];//=min 
		a[m]=temp;
	}
	printf("交换后\n");
	for(i=0;i<10;i++){
		printf("%5.1f ",a[i]);
	}
}
