#include<stdio.h>
#include<string.h>
int main()
{
	char c[20],b[10];
	gets(c);
	gets(b);
	puts(c);
	printf("%d\n",strlen(c));//打印c数组中的字符数 
	printf("%d\n",sizeof(c));//打印c数组的大小 
	printf("%d\n",strcmp(c,b));//比较c和b的大小，false=-1，ture=1，equal=0 
	return 0;
}
