#include<stdio.h>
int main()
{
	int i=100,sum=0;
	while(sum<1000)
	{
		if(i<2000&&(i%3==0))
		{
			sum=sum+i;
		}
		i++;
	}
	printf("total=%d",sum);
	return 0;
}
