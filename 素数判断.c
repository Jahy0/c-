 
#include <stdio.h>
int main()
{ 
int m,i,k;
scanf("%d",&m);
for(i=2;i<m;i++)   
 if(m%i==0) 
 break;
if(i>=m)printf("%d��һ������\n",m);
else printf("%d����һ������\n",m);
return 0;
}

