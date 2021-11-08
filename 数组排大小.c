#include<stdio.h>
int main()
{
	int a[10]={1,5,9,6,7,3,2,4,8,0},i,j,t;
	printf("没排序的\n"); 
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("排序后的数字\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
		printf("%d",a[j]); 
	}
	return 0;	
 } 
