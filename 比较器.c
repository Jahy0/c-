#include<stdio.h>
int main()
{
	float a,b,max;
	printf("请输入两个数啊a,b ",a,b);
	scanf("%f%f",&a,&b);
	if(a>b)
		max=a;
	else
		max=b;
	printf("max=%f\n",max);
	return 0;
}
