#include<stdio.h>
int main()
{
	int a[8]={12,18,11,16,27,8,19,33},i,j,t;
	for(i=0;i<7;i++)
		for(j=i+1;j<8;j++) 
		if(a[i]<a[j])
		{
			t=a[i];
	  		a[i]=a[j];
	  		a[j]=t;
	  	}
	for(i=0;i<8;i++)
	printf("%5d",a[i]);	  
	return 0;
}
