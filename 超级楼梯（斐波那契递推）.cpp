#include<stdio.h>
int main()
{
	int f[40];
	f[1]=0;
	f[2]=1;
	f[3]=2;
	for(int i=4;i<41;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	int N,M;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&M);
		printf("%d\n",f[M]);
	}
	return 0;
 } 
