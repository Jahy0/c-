#include<stdio.h>
#define n 10  
int main()
{
	int a[n][n]={1},i,j;
	for(i=1;i<n;i++)
	{
		a[i][0]=1;//��һ����1 
		for(j=1;j<n;j++)//����ڶ��п�ʼ��ֵ 
		a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(i=0;i<n;i++)//ѭ����� 
	{
		for(j=0;j<=i;j++)
		printf("%-5d",a[i][j]);
	printf("\n");
	}
	return 0;
}

