#include<stdio.h>
int main()
{
	int a,b,d;
	printf("���������");
	scanf("%d",&a);
	b=a/10%10;
	switch(b)
	{
	
	 case 1:
	 case 2:
	 case 3:
	 case 4:
	 case 5:printf("�ɼ�ΪE");break;
	 case 6:printf("�ɼ�ΪD");break;
	 case 7:printf("�ɼ�ΪC");break;
	 case 8:printf("�ɼ�ΪB");break;
	 case 9:printf("�ɼ�ΪA");break;
	 	dafault:printf("��Ч�ɼ�");
	}
	return 0; 
	
	
	
	
}
