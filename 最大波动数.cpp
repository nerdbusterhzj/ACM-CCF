#include<stdio.h>
#include<math.h>
int main()
{
	int n,num[10000],max=0;
	scanf("%d",&n);
	int a[10000];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=2;i<n;i++)
	{
		num[i]=a[i]-a[i-1];
		if(i==2) max=abs(num[i]);
		if(i>2)
		{
			if(abs(num[i])>max) max=abs(num[i]); 
		}
	}
	printf("%d",max);
	return 0;
}
