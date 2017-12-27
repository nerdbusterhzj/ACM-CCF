#include<stdio.h>
int cs(int x)
{
	if(x<=1) return x; 
	if(x%2==0) return cs(x/2);
	else if(x%3==0) return cs(x/3);
	else if(x%5==0) return cs(x/5);
	return x; 
}
int main()
{
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		for(int j=0;j<=m;j++)
		{
			k=cs(j);
			if(k==1) printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
