#include<stdio.h>
int MAX(int x,int y)
{
if(x>y)
return x;
else
return y;
}


int main()
{
	float a,b,max;
	printf("请输入两个数字\n");
	scanf("%f%f",&a,&b);
	max = MAX(a,b);
	printf("max=%f\n",max);
	return 0;
}
