#include<stdio.h>
int main()
{
	int n,m,k,s[100],a[100],b[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		k=0;
		scanf("%d",&m);
		for(int i0=0;i0<m;i0++) 
		{
			scanf("%d",&a[i0]);
		}
		for(int j=0;j<m-1;j++)
		{
			for(int i=j+1;i<m;i++)
			{
				if(a[j]>a[i])
				{
					k=a[j];
					a[j]=a[i];
					a[i]=k;
				}
			}
		}
		if(m<2||a[0]==a[m-1]) s[i]=-1;
		else 
		{
			for(int j1=0;j1<m;j1++)
		   {
			if(a[j1]!=a[j1+1]) 
			{
				b[i]=a[j1+1];
				break;
			}
		   } 
		    s[i]=1;	
		}	
	}
	for(int j2=0;j2<n;j2++)
	{
		if(s[j2]<0) printf("ERROR\n");
		if(s[j2]>0) printf("%d\n",b[j2]);
	}
	return 0;
}
