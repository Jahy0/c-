#include<stdio.h>
int main()
{
	int arr[5][3]={{90,87,92},{76,83,70},{85,80,88},{95,100,89},{88,95,90}},i,j,sum=0,num=0;		
	for(i=0;i<5;i++)//3Ϊÿ��3����5Ϊ5�� 
	{
		for(j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
			printf("%5d\n",arr[i][j]);				
		}
		num++;		
		printf("ͬѧ%d �ܷ�%d\n",num,sum);
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
		//printf("�����ַܷǱ�Ϊ%d\n",sum);		
		switch(1)
		{
			case 1:printf("���ĳɼ�Ϊ%d\n",sum);
			break;
			case 2:printf("��ѧ�ɼ�Ϊ%d\n",sum);
			break;
			case 3:printf("Ӣ��ɼ�Ϊ%d\n",sum);
			break; 
		} 
	}
	return 0;	
} 
