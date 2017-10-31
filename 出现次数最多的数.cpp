#include<stdio.h>
int main()
{
	int n,s[10000]={0},z,j,i,k,max;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&k);
		s[k]++;
	}
	for(j=0;j<10000;j++)
	{
		if(s[j]>max)
		{
			max=s[j];
			i=j;
		}
		else if(s[j]==max)
		{
			if(j<i) i=j;
		}
		
	}
	printf("%d",i);	
	return 0;
}
