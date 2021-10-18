#include<stdio.h>
int main()
{
	int year,month,day;
	printf("输入一个年份\n");
	printf("输入一个月份\n");
	scanf("%d",&year);
	scanf("%d",&month);
	switch (month)
	{
		case 2:if(year%400==0||(year%4==0&&year%100!=0))
    			printf("29天");
			else
				printf("28天"); 
		break; 
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("31天");break;
		case 4:
		case 6:
		case 9:
		case 11:printf("30天"); break;
		
	}
	
	  
}
