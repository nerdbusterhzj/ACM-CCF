#include<stdio.h>
int main()
{
	int a[10002],b,c,d,n,i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}
	for(c=0;c<n;c++)
	{
		for(b=0;b<n-1;b++)
		{
			if(a[b]>a[b+1])
			{
				temp=a[b];
				a[b]=a[b+1];
				a[b+1]=temp;
			}
		} 
		for(i=0;i<n;i++) printf("%d ",a[i]);
	    printf("\n");	 
	}
	return 0;	
}

	
	

