#include<stdio.h>
void main()
{
	int count,grades;
	printf("请输入分数：");  
	scanf("%d",&grades);
	while(grades>=0)
	{
		if(grades>=60) count++;
		scanf("%d",&grades);
   }
	printf("共有%d个学生成绩合格！\n",count);
}
