#include<stdio.h>
int main()
{
	int n,k,m,i,j;
	scanf("%d%d%d",&n,&k,&m);
	int v[1000];
	for(i=1;i<=n;i++)	v[i]=i;
	for(;n>2;n--)
	{
		j=k+m-1;
		if(j>n) j=j%n;
		if(j==0) j=n;
		for(int a=j+1;a<=n;a++) v[a-1]=v[a];
		k=j;
	}
	printf("%d %d",v[1],v[2]);
	return 0;
}






