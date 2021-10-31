#include <stdio.h>
int main()
{
    float e=1.0,n=1.0;
    int i=1;
    do 
    {
        e+=1/n;
        i++;
        n=i*n;
    }while(1/n>1e-5); 
    printf("eµÄÖµÊÇ£º%.5f\n",e);
    return 0;
}
