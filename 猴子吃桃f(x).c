#include<stdio.h>
int fibonacci(int n);
int main()
{
	int num;	
	printf("%d",fibonacci(num));
	return 0;
}

int fibonacci(int f3)
{
	int f1=0,f2=1,m,a,b=0;
	scanf("%d",&a);//jie
	for(m=1;m<a;m++)
	{
		if(a<2&&a>0)
		{
			f3==1;
		}
		if(a>2)
		{
			f3=f1+f2;
			f2=f3;
			f1=f2;
		}			
	}
	return f3;
}
	

