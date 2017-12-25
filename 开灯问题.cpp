#include<stdio.h>
int main()
{
	int n,k,a[1005];
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	 for(int i=2;i<=k;i++)
	 {
	 	for(int j=1;j<=n;j++)
	 	{
	 		if(j%i==0) a[j]=-a[j];
		 }
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	if(a[i]>0) printf("%d ",a[i]);
	 }
	 return 0;
}
