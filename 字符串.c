#include<stdio.h>
#include<string.h>
int main()
{
	char c[20],b[10];
	gets(c);
	gets(b);
	puts(c);
	printf("%d\n",strlen(c));//��ӡc�����е��ַ��� 
	printf("%d\n",sizeof(c));//��ӡc����Ĵ�С 
	printf("%d\n",strcmp(c,b));//�Ƚ�c��b�Ĵ�С��false=-1��ture=1��equal=0 
	return 0;
}
