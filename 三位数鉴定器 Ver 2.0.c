#include<stdio.h>
inr main()
{
	int a,b,c,d//bΪ��λ��cΪʮλ��dΪ��λ
	printf("������һ����������λ������");
	scanf("%d",&a);
	b=a/100;
	c=a/10%10;
	d=a%10;
	if(b>0)
		printf("���Ǹ���λ��%d,��λ��%d,ʮλ��%d,��λ��%d",a,b,c,d);
		else if(b>0||c>0)
			printf("���Ǹ���λ��%d,ʮλ��%d,��λ��%d",a,c,d);
			else if(b>0||c>0||d>0)
				printf("���Ǹ�һλ��%d,��λ��%d",a,d);
			
	return 0;
	 
 } 
