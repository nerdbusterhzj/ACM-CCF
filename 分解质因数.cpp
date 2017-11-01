#include<stdio.h>
int main()
{
	int x,k,num[100][100],s=0,no[100];
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&x);
		for(int j=2;j<=x;j++)
		{
			while(x!=1)
			{
				if(x%j==0)
				{
					num[i][s]=j;
					x=x/j;
					s++;
				}
				else break;
			}
		 } 
		 no[i]=s;
		 s=0;
	}
	for(int i=0;i<k;i++)
	{
		for(int s=0;s<no[i];s++)
		{
			if(s<no[i]-1) printf("%d*",num[i][s]);
			if(s==no[i]-1) printf("%d",num[i][s]);
		}
		printf("\n");		
	}
}
