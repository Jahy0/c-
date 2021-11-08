#include<stdio.h>
int main()
{
	int n=1,d=1,m=0;
	scanf("%d",&m);
	while(d<m)
	{			
		n=(n+1)*2;
		d++;
	}
	printf("zÕªÁË%d¸ö",n);
	return 0;
}
