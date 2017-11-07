#include<stdio.h>
int main()
{
	int a[1000],b[1000],p,c,d,n,temp;
	scanf("%d",&n);
	for(int k=1;k<=n;k++)	
	{
		scanf("%d",&a[k]);
	}
	for(int i=1;i<=n;i++)
	{
		temp=a[i];
		p=i-1;
		while(p>0&&temp<a[p])
		{
			a[p+1]=a[p];
			p--;
		}
		a[p+1]=temp;
		for(int j=1;j<=i;j++)
		{
			 printf("%d ",a[j]);
		}
		printf("\n");
	}
	return 0;
}
