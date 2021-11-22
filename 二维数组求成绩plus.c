#include<stdio.h>
int main()
{
	int arr[5][3]={{90,87,92},{76,83,70},{85,80,88},{95,100,89},{88,95,90}},i,j,sum=0,num=0;		
	for(i=0;i<5;i++)//3为每行3个，5为5行 
	{
		for(j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
			printf("%5d\n",arr[i][j]);				
		}
		num++;		
		printf("同学%d 总分%d\n",num,sum);
		if(sum)
		{
			sum=0;
		}		 
	}		
	for(j=0;j<3;j++)
	{
		sum=0;
		printf("\n");
		for(i=0;i<5;i++)
		{
			sum=sum+arr[i][j];
			//printf("%5d\n",arr[i][j]);
		}
		//printf("三科总分非别为%d\n",sum);		
		switch(1)
		{
			case 1:printf("语文成绩为%d\n",sum);
			break;
			case 2:printf("数学成绩为%d\n",sum);
			break;
			case 3:printf("英语成绩为%d\n",sum);
			break; 
		} 
	}
	return 0;	
} 
