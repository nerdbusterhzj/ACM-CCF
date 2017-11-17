#include<stdio.h>
int main()
{
	int m,n,a[31][31],b[31][31];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(a[0][0]==1||a[m-1][n-1]==1) printf("0\n");
	else 
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
			if(i==0&&j==0) b[i][j]=1;
			else if(a[i][j]==1) b[i][j]=0;
			else if(i==0&&b[i][j-1]==0) b[i][j]=0;	
			else if(j==0&&b[i-1][j]==0) b[i][j]=0;
			else if(i==0||j==0) b[i][j]=1;
			else b[i][j]=b[i-1][j]+b[i][j-1];		
			}	
		}	
	}
	printf("%d\n",b[m-1][n-1]);
 } 
