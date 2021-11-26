#include<stdio.h>
int fib(int n)
{
	if(n==1||n==2)
		return 1;
	else if(n>2)
		return fib(n-1)+fib(n-2);
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("第%d个项值为%d\n",x,fib(x));
	return 0;
}
