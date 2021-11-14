#include<stdio.h>
int main()
{
	int arr[5][3]={{90,87,92},{76,83,70},{85,80,88},{95,100,89},{88,95,90}},i,j,sum=0;		
	for(i=0;i<5;i++)//3为每行3个，5为5行 
	{
		for(j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
			printf("%5d\n",arr[i][j]);				
		}		
		printf("同学 总分%d\n",sum);
		if(sum)
		{
			sum=0;
		}		 
	}
	return 0;	
} 
