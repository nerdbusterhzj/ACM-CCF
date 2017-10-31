#include<stdio.h>
int main()
{
	int n,s[100],k,j,i,m,max; 
	scanf("%d",&n);
	for(m=0;m<n;m++)
		scanf("%d",&s[m]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		 if(s[i]>s[j])
		 {
		 k=s[i];
		 s[i]=s[j];
		 s[j]=k;
		 }
		}
	}	
	max=s[i];
	printf("%d",max);
 } 
