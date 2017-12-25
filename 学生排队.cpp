#include<stdio.h>
int main()
{
	int n,m,a[10000],t=1,x,y,q,p;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&p,&q);
		while(a[t++]!=p);
		p=t-1;
		x=p+q;
		y=a[p];
		if(q>0) t=1;
		else t=-1;
		while(p!=x)
		{
			a[p]=a[p+t];
			p=p+t;
		}
		a[p]=y;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
