#include<stdio.h>
int main()
{
	char a[81];
	int k=0,s,m=0; 
	for(s=0;s<80;s++)
	{
		scanf("%c",&a[s]);
		if(a[s]=='\n') break;
	}
	m=s;
	for(int i=0;i<m-1;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(a[j]<a[i])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	for(int i=0;i<m-1;i++)
	{
	    if(a[i]!=a[i+1]) continue;
	    if(a[i]==a[i+1]) 
	   {
	   	for(int j=i;j<m;j++)
	   	{
	   	  a[j]=a[j+1];
		}
	     m--;
       }		
	}	
	printf("%d\n",m);
	for(int i=0;i<m;i++)
	{
		printf("%c",a[i]);
	}
}
