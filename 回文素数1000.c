#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=1000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			if(i<10)
			{
				printf("回文素数%-2d\n",i);
			}
			else if(i/10==i%10)
			{
				printf("回文素数%-2d\n",i);
			} 
			else if(i/100==i%10)
			{
				printf("回文素数%-2d\n",i);
			}
		} 
	}
	return 0;
}
 
