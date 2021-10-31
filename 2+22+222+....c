#include<stdio.h>
int main()
{
	int s=0,i=1,n;
	int d=2;
	printf("请输入要算多少位");
	scanf("%d",&n);	
	for(i=1;i<=n;i++)
	{		
		s=s+d;
		d=d*10+2;		
	}
	printf("和为%d",s);
	return 0;
}
