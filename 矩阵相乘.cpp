#include<stdio.h>
int main()
{
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int jz1[100][100],jz2[100][100],jz3[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&jz1[i][j]);
		}
	}
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			scanf("%d",&jz2[i][j]);
		}
	}
	int I,J;
	I=m;
	J=q;
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<J;j++)
		{
			for(int i1=0;i1<n;i1++)
			{
				jz3[i][j]+=jz1[i][i1]*jz2[i1][j];
			}
		}
	}
	if(n!=p) 
	{
		printf("error");
	}
	else
	{
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<J;j++)
		{
			if(j==J-1) printf("%d\n",jz3[i][j]);
			else printf("%d ",jz3[i][j]);
		}
	}
	}
	return 0;
}
