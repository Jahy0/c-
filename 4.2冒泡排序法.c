#include<stdio.h>
int main()
{
	int a[8]={12,18,11,16,27,8,19,33},i,j,t;	
	for(i=0;i<7;i++)
	 	for(j=0;j<7-i;j++) 
	  	if(a[j]<a[j+1])
	  	{
	  		t=a[j];
	  		a[j]=a[j+1];
	  		a[j+1]=t;
	  	}
	for(i=0;i<8;i++)
	printf("%5d",a[i]);
	return 0;
}
