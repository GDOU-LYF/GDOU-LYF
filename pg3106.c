  #include "stdio.h"
  main()
 { 
    char c;
    printf("请输入一个字符: ");
    c=getchar();
    printf("输出这三字符和它们的ASCII码值\n");
    int i,temp=c-1;
    for(i=0; 3;i++){
    	temp+=i;
    	printf("%c  %d\n",temp,temp);
	}
	printf("\n");
 }









