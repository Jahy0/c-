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
				printf("1ԪҪ%2d�� ���Ҫ%2d�� һ��Ҫ%2d��\n",a,b,c);
			}
		}	
	}
	return 0;
} 
