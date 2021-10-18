#include<stdio.h>
#include<math.h>
int main()
{
	int p,q,w,b;
	printf("ÊäÈëÏûºÄ½ð¶î");
	scanf("%d",&p);
	q=p/200;
	switch(q)
	{	
		case 0:b=0;
			break;
		case 1:b=5;
			break;
		case 2:b=10;
			break;
		case 3:
		case 4:b=15;
			break;
	}
	if(q>=5)
		b=20;
	w=p-p*b/100;
	printf("%d",w);
	return 0;
		
}

