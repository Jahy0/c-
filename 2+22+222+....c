#include<stdio.h>
int main()
{
	double s=0,i=1,n;
	int d=2;
	printf("������Ҫ�����λ");
	scanf("%lf",&n);	
	for(i=1;i<=n;i++)
	{		
		s=s+d;
		d=d*10+2;		
	}
	printf("��Ϊ%lf",s);
	return 0;
}
