#include<stdio.h>
int main()
{
	int n=1,m;
	scanf("%d",&m);//输入天数 
	while(--m)
	{			
		n=(n+1)*2;
	}
	printf("摘了%d个",n);
	return 0;
}
