#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,j=1,i=1,count;
	scanf("%d",&n);
	int a[n][n];
	count=1;
	a[1][1]=1;
	m=(n*n-n)/2+n;
	while(count<m)
	{
		if(i==1) 
		{
			i=j+1;
			j=1;
			a[i][j]=++count;
		}
		while(i>1)
		{
			a[--i][++j]=++count;
		} 
	}
	if(n==0) printf("0");
	else 
	{
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
			if(a[i][j+1]>m||a[i][j+1]<=0) break;	
		}
		printf("\n");
	}
	}
	return 0;
}
