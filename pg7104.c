#include <stdio.h>
int main(){
	int a,n;
	long sum=0,ret=0;
	scanf("%d,%d",&a,&n);
	int i,count=1;
	for(i=0;i<n;i++){
		sum=sum+a*count;
		ret=ret+sum;
		count=count*10; 
	 
	printf("%ld",ret); 
	return 0;
}
