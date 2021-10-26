#include<stdio.h>
int main()
{
	int i=10000,b,c,d,e,a=1;	
	while(i<=50000)
	{		
		b=i/10000;
		c=i/1000%10;
		d=i/10%10;
		e=i%10;
		if((b==e)&&(c==d))
		{				
		printf("%7d",i);		 
			if(a%5==0)		
		    printf("\n");
			a++;
		}
		i++;
	}	
	return 0;
}
