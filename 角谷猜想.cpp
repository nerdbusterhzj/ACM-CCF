#include<stdio.h>
int main()
{
	int T,a[100],step=0;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		int n;
		scanf("%d",&n);
		for(step=0;n!=1;step++)
		{
			if(n%2==0)
			{
				n=n/2;
			}
			else if(n%2!=0)
			{
				n=(3*n+ 1)/2;
			}
		}
		a[i]=step;
		step=0;
	}
	for(int i=0;i<T;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
