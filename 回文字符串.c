#include<stdio.h>
int main()
{
	char ch[20],a,b,c;
	gets(ch);
	a=strlen(ch);
	for(b=0,c=a-1;b<c;b++,c--)
	{
		if(ch[b]==ch[c])
		{
			printf("�ǻ����ַ���\n"); 
			break;
		}
		else
		{
			printf("���ǻ����ַ�����\n"); 
			break;
		}
	}	
	return 0;
} 
