#include<stdio.h>
int main()
{
	int n,m,a[100][100],max[100],min[100],k=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		max[i]=a[i][0];
		for(int j=0;j<m;j++)
		{
			if(max[i]<a[i][j]) max[i]=a[i][j];
		}
	}
	for(int j=0;j<m;j++)
	{
		min[j]=a[0][j];
		for(int i=0;i<n;i++)
		{
			if(min[j]>a[i][j]) min[j]=a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==max[i]&&a[i][j]==min[j]) 
			{
				printf("a[%d][%d]=%d ",i,j,a[i][j]);
			    k++;
			}
		}
	}
	if(k==0) printf("NO");
	printf("\n");
	return 0; 
}
