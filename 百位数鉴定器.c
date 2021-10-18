#include<stdio.h>
int main()
{
	int num,a,b,c;
	printf("请输入一个三位数=",num);
	scanf("%d",&num);
	a=num/100;
	b=num/10%10;
	c=num%10;
	printf("百位a=%d\n十位b=%d\n个位=c%d\n",a,b,c); 
	return 0;
}
