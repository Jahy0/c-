#include<stdio.h>
int main()
{
	int num,a,b,c;
	printf("������һ����λ��=",num);
	scanf("%d",&num);
	a=num/100;
	b=num/10%10;
	c=num%10;
	printf("��λa=%d\nʮλb=%d\n��λ=c%d\n",a,b,c); 
	return 0;
}
