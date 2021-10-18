#include<stdio.h>
inr main()
{
	int a,b,c,d//b为百位，c为十位，d为个位
	printf("请输入一个不大于三位的数字");
	scanf("%d",&a);
	b=a/100;
	c=a/10%10;
	d=a%10;
	if(b>0)
		printf("这是个三位数%d,百位是%d,十位是%d,个位是%d",a,b,c,d);
		else if(b>0||c>0)
			printf("这是个二位数%d,十位是%d,个位是%d",a,c,d);
			else if(b>0||c>0||d>0)
				printf("这是个一位是%d,各位是%d",a,d);
			
	return 0;
	 
 } 
