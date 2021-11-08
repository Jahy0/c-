#include<stdio.h>
int main()
{
	int arr[10]={0},i,max,sum,min;
	float aver; 
	for(i=0;i<10;i++)
	{
		printf("请输入成绩");
		scanf("%d",&arr[i]);
	}
	min=arr[0],max=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{			
			max=arr[i];			
		}
		else if(arr[i]<min)
		{			
			min=arr[i];
		}
		sum=sum+arr[i];
	}
	aver=(sum-max-min)/10.0;
	printf("出去最高和最低后的平均成绩%.2f\n",aver);
	printf("最大成绩%d\n",max);
	printf("最小成绩%d",min);
	return 0;
} 
