#include<stdio.h>
int main()
{
	int N,M,n,m,step;
	long s1,s2;
	long sum;
	scanf("%d",&N);
	for(int d=0;d<N;d++)
	{
		scanf("%d",&M);
		for(n=0;n<=M-1;n++)
		{
			s1=1;
			s2=1;
			for(m=0;;m++)
			{
				step=n+m*2;
				if(step==M-1) 
				{
					for(int i=0;i<=n-1;i++)
					{
						s1=s1*(n+m-i);	
					} 
					for(int i=0;i<=n-1;i++)
					{
						s2=s2*(n-i);
					}
					sum+=s1/s2;
					printf("%ld\n",sum);
					break;	
				}
				else if(step>M-1) break;
			}
		}
		printf("%ld\n",sum);
		sum=0;
	}
	return 0;
}
