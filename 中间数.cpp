#include<stdio.h>
int main()
{
	int n,a[100000],b[100000],c[100000],i,j,n1=0,n2=0,k=0,s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		 if(a[i]>a[j])
		 {
		 k=a[i];
		 a[i]=a[j];
		 a[j]=k;
		 }
		}
	}	
    for(int i=0;i<n;i++)
    {
    	b[i]=a[i];
    	c[i]=a[n-1-i];
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==c[i]) 
		{
			s=b[i];
			for(int j=0;j<i;j++)
			{
				if(b[j]<s) n1++;
				if(c[j]>s) n2++;
			}
			if(n1==n2) 
			{
				printf("%d",b[i]);
				break;
			}
			else if(n1!=n2)
			{
				printf("-1");
				break;
			}
		}
		if(i>(n/2)&&b[i]!=c[i])
		{
			printf("-1");
			break;
		}
	}
	return 0;
}

