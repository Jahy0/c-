#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("请输入三个数字a,b,c",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a>c?a:c:b>c?b:c;
	printf("最大数max=%d",max);
	return 0;
}
