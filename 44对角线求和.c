#include<stdio.h>
int main()
{
	int a[4][4],j,i,sum;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
				scanf("%d",&a[i][j]);
		}
	}	
    sum=a[0][0]+a[1][1]+a[2][2]+a[3][3];//for(i=0,j=0;j*i<16;j++,i++)
	printf("对角线值为%d",sum);					//sum=sum+a[i][j]
	return 0;							//是否可行？ 
 } 
