#include<stdio.h>
int main()
{
	int n,k=1,s=0,a[100],j=1,i,m=0,y=1,num=0,sum=0;
	scanf("%d",&n);
	m=n;
    while(n/k!=0)
    {
    	if(n/k>0) s++;
    	k*=10;
    }
    for(int a=1;a<s;a++)
    {
    	j=j*10;
    }
	for(i=0;i<100000;i++)
	{
		a[i]=n/j;
		n=n%j;
		j=j/10;
		if(j<1) break;
	}
	for(int x=0;x<=i;x++)
	{
	  	num=a[x]*y;
		y=y*10;
		sum=sum+num;
	} 
    if(sum==m) printf("Yes");
	else if(sum!=m) printf("No");
	return 0;
} 
