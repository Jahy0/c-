#include<stdio.h>
int main()
{
	int arr[10]={0},i,max,sum,min;
	float aver; 
	for(i=0;i<10;i++)
	{
		printf("������ɼ�");
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
	printf("��ȥ��ߺ���ͺ��ƽ���ɼ�%.2f\n",aver);
	printf("���ɼ�%d\n",max);
	printf("��С�ɼ�%d",min);
	return 0;
} 
