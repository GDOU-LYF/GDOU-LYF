#include<stdio.h>
main()
{
	int i,j;
	long long sum,item;
	sum=0; 
	for(i=1;i<=10;i++)
	{   
		item=1;
		for(j=1;j<=i;j++)
			item=item*i;
		sum=sum+item;
	}
	printf("th sum is %ld\n",sum);
}
