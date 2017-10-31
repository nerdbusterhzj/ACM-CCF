#include<stdio.h>
int main()
{
	int N,n,k=0,m,s=0;
	scanf("%d",&N);
	n=N/10;
	if(n>=5)
	{
		k=n/5;
		m=n-k*5;
		if(m>=3) s=m/3;
	}
	else if(n>=3) n=n+1;
	printf("%d",n+k*2+s);
	return 0;
}
