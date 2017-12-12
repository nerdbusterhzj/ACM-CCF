#include<stdio.h>
#include<stdbool.h>
int main()
{
	int num,n[100],b[100][100],c[1000],d[100][100],e[100][100],m,h,no[100],re[100];
	scanf("%d",&num);
	m=num/8;
	for(int i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	for(int i=0;i<m;i++)
	{
		bool a[1000];
		int j=0;
		while(1)
		{
			a[j]=n[i]%2;
			n[i]=n[i]/2;
			if(n[i]==0) break;
			j++;
		}
		for(int k=0;k<8;k++)
		{
			if(k<7-j) b[i][k]=0;
			else if(k>=(7-j)) b[i][k]=a[7-k];
		}
	}
	int k=0;//将二维数组合并为一维数组 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<8;j++)
		{
			c[k+j]=b[i][j];
		}
		k=k+8;
	}
	int s=0;
	for(h=0;h<100;h++)//将一连串数字分段 
	{
		no[h]=0;
		for(int i=0;i<(8*m);i++)
		{
			if(s+no[h]>=(8*m)) break;
			if(c[s+i]==c[s+i+1]) 
			{
				d[h][i]=c[s+i];
				no[h]++;
			}
			if(c[s+i]!=c[s+i+1])
			{
				d[h][i]=c[s+i];
				no[h]++;
				break;	
			} 
	    }
	    if(s>=(8*m)) break;
	    s=s+no[h];
	}
	for(int i=0;i<h;i++)//将每一段数字转化为二进制 
	{
		if(d[i][0]==0) e[i][0]=0;
		else if(d[i][0]==1)	e[i][0]=1;
		bool a1[1000];
		int j1=0;
		while(1)
		{
			a1[j1]=no[i]%2;
			no[i]=no[i]/2;
			if(no[i]==0) break;
			j1++;
		}
		for(int k=1;k<8;k++)
		{
			if(k<7-j1) e[i][k]=0;
			else if(k>=(7-j1)) e[i][k]=a1[7-k];
		}	
	}
	for(int i=0;i<h;i++)
	{
		re[i]=e[i][0]*128+e[i][1]*64+e[i][2]*32+e[i][3]*16+e[i][4]*8+e[i][5]*4+e[i][6]*2+e[i][7]*1;
		printf("%d ",re[i]);
	}
	return 0;
}
