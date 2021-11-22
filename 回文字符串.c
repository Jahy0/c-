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
			printf("是回文字符串\n"); 
			break;
		}
		else
		{
			printf("不是回文字符串组\n"); 
			break;
		}
	}	
	return 0;
} 
