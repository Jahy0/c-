#include<stdio.h>
int main()
{
	float i=1,n=1,m=1,sum=0;
	while(n<1e5)
	{		
		n=n*i;
		m=1/n;
		sum=sum+m;
		i++;
	}
sum+=1;
	printf("%.5f",sum);
	return 0;
}
