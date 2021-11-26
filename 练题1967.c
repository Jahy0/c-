#include<stdio.h>
float sign(float a)
{
	//float x;	
	if(a>0)
		return 1;
	else if(a==0)
		return 0;
	else if(a<0)
		return -1;
}
int main()
{
	float x;
	int y;
	scanf("%f",&x);
	y=sign(x);
	printf("%d",y);
	return 0;
}
