#include<stdio.h>
int main()
{
	int n,s[10000]={0},z,j,i=0,k,max=0;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&z);
		s[z]++;
	}		
	for(j=0;j<10000;j++)
	{
		if(s[max]<s[j]) max=j;
	}
		printf("%d",max);
		return 0;
}
