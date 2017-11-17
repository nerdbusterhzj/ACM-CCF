#include<stdio.h>
int main()
{
	int m,n,m1,s;
	scanf("%d%d",&m,&n);
	m1=m+1;
	int a[m1],b[m1];
	scanf("%d",&s);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 if(s==1)
	 {
	 	for(int i=1;i<=m;i++)
	    {
		  if(i<(m1-n)) b[i]=a[i+n];
		  if(i>=(m1-n)) b[i]=a[i-(m-n)];
	    }
	 }
	 if(s==0)
	 {
	 	for(int i=1;i<=m;i++)
	 	{
	 		if(i<=n) b[i]=a[m-n+i];
	 		if(i>n) b[i]=a[i-n];
	     }
	 }
	 for(int j=1;j<=m;j++)
	 {
	 	printf("%d ",b[j]);
	 }
	 return 0;
}
