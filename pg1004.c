
#include<stdio.h>
void main()
{
	int i,j,ret;
	int a[4][6]={0,};
	int b[6]={0,};
	printf("请为二维数组输入值：\n");
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			scanf("%d &a[i][j]);
			a[i][5]=a[i][5]+a[i][j];
		}
	}
	printf("该数组为：\n");

	for(i=0;i<6;i++,ret=0){
		for(j=0;j<3;j++){
			ret=ret+a[j][i];
		}
		a[3][i]=ret;
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<6; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}

