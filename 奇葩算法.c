#include<stdio.h>
int main()
{
	double m=2,n=1,b,i;
	double sum=0.0,a;
	for(i=1;i<=20;i++)
	{		
		a=1/n;
		sum=sum+a*m;
		b=m;
		m=m+n;
		n=b;
	}
	printf("%.4f",sum);	
	return 0;
 } 
