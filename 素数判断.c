 
#include <stdio.h>
int main()
{ 
int m,i,k;
scanf("%d",&m);
for(i=2;i<m;i++)   
 if(m%i==0) 
 break;
if(i>=m)printf("%d是一个素数\n",m);
else printf("%d不是一个素数\n",m);
return 0;
}

