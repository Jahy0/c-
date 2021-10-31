#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=0;a<=5;a++)
	{
		for(b=0;b<=10;b++)
		{
			for(c=0;c<=50;c++)
			if(a*1+b*0.5+c*0.1==5)
			{
				printf("1元要%2d个 五角要%2d个 一角要%2d个\n",a,b,c);
			}
		}	
	}
	return 0;
} 
