#include <stdio.h>
int main()
{ 
	int fib[15],i,s=0;
	fib[0]=1;
	fib[1]=1;
	for(i=2;i<15;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		printf("%5d\n",fib[i-2]);
	} 
	for(i=0;i<15;i++)
	{	
		if(fib[i]%2==1)
		{
			s=s+fib[i];
			printf("%5d\n",s);
		}		
	}	
	return 0;
}
