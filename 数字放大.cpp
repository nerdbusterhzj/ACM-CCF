#include<stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	for(int p=0;p<k;p++)
	{
		int n,m,j=1,s=1,q=0,a[100];
		scanf("%d",&n);
		m=n;
		while(n/s!=0)
		{
			if(n/s>0) q++;
			s*=10;
		}
		for(int c=1;c<q;c++)
		{
			j=j*10;
		}	
		for(int i=0;i<100000;i++)
		{
			a[i]=n/j;
			n=n%j;
			j=j/10;
			if(j<1) break;
		}
		printf("%d:\n",m);
		for(int i=0;i<7;i++)
		{
			if(i==0)
			{
			for(int i=0;i<q;i++)
			{
				if(a[i]==0)	printf("*****  "); 
				if(a[i]==1)	printf("    *  ");
				if(a[i]==2) printf("*****  ");
				if(a[i]==3) printf("*****  ");
				if(a[i]==4)	printf("*   *  ");
				if(a[i]==5)	printf("*****  ");
				if(a[i]==6)	printf("*****  ");
				if(a[i]==7)	printf("*****  ");
				if(a[i]==8)	printf("*****  ");
				if(a[i]==9)	printf("*****  ");
			}
			printf("\n");
			}
			if(i==1)
			{
			for(int i=0;i<q;i++)
			{
				if(a[i]==0)	printf("*   *  "); 
				if(a[i]==1)	printf("    *  ");
				if(a[i]==2) printf("    *  ");
				if(a[i]==3) printf("    *  ");
				if(a[i]==4)	printf("*   *  ");
				if(a[i]==5)	printf("*      ");
				if(a[i]==6)	printf("*      ");
				if(a[i]==7)	printf("    *  ");
				if(a[i]==8)	printf("*   *  ");
				if(a[i]==9)	printf("*   *  ");	
			} 
			printf("\n");
			}
			if(i==2)
			{
			for(int i=0;i<q;i++)
			{
				if(a[i]==0)	printf("*   *  "); 
				if(a[i]==1)	printf("    *  ");
				if(a[i]==2) printf("    *  ");
				if(a[i]==3) printf("    *  ");
				if(a[i]==4)	printf("*   *  ");
				if(a[i]==5)	printf("*      ");
				if(a[i]==6)	printf("*      ");
				if(a[i]==7)	printf("    *  ");
				if(a[i]==8)	printf("*   *  ");
				if(a[i]==9)	printf("*   *  ");
			}
			printf("\n");
			}
			if(i==3)
			{
			for(int i=0;i<q;i++)
			{
				if(a[i]==0)	printf("*   *  "); 
				if(a[i]==1)	printf("    *  ");
				if(a[i]==2) printf("*****  ");
				if(a[i]==3) printf("*****  ");
				if(a[i]==4)	printf("*****  ");
				if(a[i]==5)	printf("*****  ");
				if(a[i]==6)	printf("*****  ");
				if(a[i]==7)	printf("    *  ");
				if(a[i]==8)	printf("*****  ");
				if(a[i]==9)	printf("*****  ");
			}
			printf("\n");
			}
			if(i==4)
			{
			for(int i=0;i<q;i++)
			{
				if(a[i]==0)	printf("*   *  "); 
				if(a[i]==1)	printf("    *  ");
				if(a[i]==2) printf("*      ");
				if(a[i]==3) printf("    *  ");
				if(a[i]==4)	printf("    *  ");
				if(a[i]==5)	printf("    *  ");
				if(a[i]==6)	printf("*   *  ");
				if(a[i]==7)	printf("    *  ");
				if(a[i]==8)	printf("*   *  ");
				if(a[i]==9)	printf("    *  ");
			}
			printf("\n");
			}
			if(i==5)
			{
			for(int i=0;i<q;i++)
			{
				if(a[i]==0)	printf("*   *  "); 
				if(a[i]==1)	printf("    *  ");
				if(a[i]==2) printf("*      ");
				if(a[i]==3) printf("    *  ");
				if(a[i]==4)	printf("    *  ");
				if(a[i]==5)	printf("    *  ");
				if(a[i]==6)	printf("*   *  ");
				if(a[i]==7)	printf("    *  ");
				if(a[i]==8)	printf("*   *  ");
				if(a[i]==9)	printf("    *  ");
			}
			printf("\n");
			}
			if(i==6)
			{
			for(int i=0;i<q;i++)
			{
				if(a[i]==0)	printf("*****  "); 
				if(a[i]==1)	printf("    *  ");
				if(a[i]==2) printf("*****  ");
				if(a[i]==3) printf("*****  ");
				if(a[i]==4)	printf("    *  ");
				if(a[i]==5)	printf("*****  ");
				if(a[i]==6)	printf("*****  ");
				if(a[i]==7)	printf("    *  ");
				if(a[i]==8)	printf("*****  ");
				if(a[i]==9)	printf("*****  ");
			}
			printf("\n");
			}
		}
	}
	return 0;
}
