#include<stdio.h>
int main()
{
	int a,b,d;
	printf("请输入分数");
	scanf("%d",&a);
	b=a/10%10;
	switch(b)
	{
	
	 case 1:
	 case 2:
	 case 3:
	 case 4:
	 case 5:printf("成绩为E");break;
	 case 6:printf("成绩为D");break;
	 case 7:printf("成绩为C");break;
	 case 8:printf("成绩为B");break;
	 case 9:printf("成绩为A");break;
	 	dafault:printf("无效成绩");
	}
	return 0; 
	
	
	
	
}
